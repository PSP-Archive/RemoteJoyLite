#ifndef _DIRECT3D_H_
#define _DIRECT3D_H_
/*------------------------------------------------------------------------------*/
/* Direct3D																		*/
/*------------------------------------------------------------------------------*/
#include <windows.h>
#include <d3d9.h>

/*------------------------------------------------------------------------------*/
/* class																		*/
/*------------------------------------------------------------------------------*/
class AkindD3D {
  private:
	IDirect3D9			*m_pD3DObj;
	IDirect3DDevice9	*m_pD3DDev;
  public:
	AkindD3D();
	~AkindD3D();
  private:
	AkindD3D( const AkindD3D& ){}
	AkindD3D &operator=( const AkindD3D& ){ return *this; }
  public:
	BOOL Init( HWND hWnd );
	void Exit( void );
	IDirect3DDevice9 *getDevice( void );
};

#endif	// _DIRECT3D_H_
