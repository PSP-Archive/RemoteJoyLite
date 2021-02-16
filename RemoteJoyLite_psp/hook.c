/*------------------------------------------------------------------------------*/
/* hook																			*/
/*------------------------------------------------------------------------------*/
#include <pspkernel.h>
#include <psputilsforkernel.h>
#include <string.h>
#include "hook.h"

/*------------------------------------------------------------------------------*/
/* HookNidAddress																*/
/*------------------------------------------------------------------------------*/
void *HookNidAddress( SceModule *mod, char *libname, u32 nid )
{
	int i;

	u32 *ent_next = (u32 *)mod->ent_top;
	u32 *ent_end  = (u32 *)mod->ent_top + (mod->ent_size >> 2);

	while ( ent_next < ent_end ){
		SceLibraryEntryTable *ent = (SceLibraryEntryTable *)ent_next;
		if ( ent->libname != NULL ){
			if ( strcmp( ent->libname, libname ) == 0 ){
				int count = ent->stubcount + ent->vstubcount;
				u32 *nidt = ent->entrytable;
				for ( i=0; i<count; i++ ){
					if ( nidt[i] == nid ){ return( (void *)nidt[count+i] ); }
				}
			}
		}
		ent_next += ent->len;
	}
	return( NULL );
}

/*------------------------------------------------------------------------------*/
/* HookSyscallAddress															*/
/*------------------------------------------------------------------------------*/
void *HookSyscallAddress( void *addr )
{
	u32		**ptr;
	if ( addr == NULL ){ return( NULL ); }
	asm( "cfc0 %0, $12\n" : "=r"(ptr) );
	if ( ptr == NULL ){ return( NULL ); }

	int		i;
	u32		*tbl = ptr[0];
	int		size = (tbl[3]-0x10)/sizeof(u32);
	for ( i=0; i<size; i++ ){
		if ( tbl[4+i] == (u32)addr ){ return( &tbl[4+i] ); }
	}
	return( NULL );
}

/*------------------------------------------------------------------------------*/
/* HookFuncSetting																*/
/*------------------------------------------------------------------------------*/
void HookFuncSetting( void *addr, void *entry )
{
	if ( addr == NULL ){ return; }

	((u32 *)addr)[0] = (u32)entry;
	sceKernelDcacheWritebackInvalidateRange( addr, sizeof( addr ) );
	sceKernelIcacheInvalidateRange( addr, sizeof( addr ) );
}
