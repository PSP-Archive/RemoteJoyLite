TARGET   = RemoteJoyLite.exe
MAIN_OBJ = WinMain.o RemoteJoyLite.res RemoteJoyLite.o Direct3D.o DirectInput.o DebugFont.o FontData_5x5.o
CAPT_OBJ = Bitmap.o Movie.o Wave.o Macro.o
CONF_OBJ = Setting.o Setting_Joy.o Setting_Key.o Setting_Etc.o Setting_Filt.o Setting_Capt.o Setting_PSP.o Setting_Macro.o
OBJS     = $(MAIN_OBJ) $(CAPT_OBJ) $(CONF_OBJ)
LIBS     = -ld3d9 -ldinput -ldxguid -lwinmm -lusb -lvfw32
LANGUAGE =  LANG_JA
#LANGUAGE =  LANG_EN
CFLAGS   = -O3 -Wall -g -DWINVER=0x0500 -DUNICODE -DLANGUAGE=$(LANGUAGE)
LDFLAGS  = -L/usr/local/lib -mwindows -mno-cygwin
RCFLAGS  = -O coff

.SUFFIXES: .cpp .c .rc .res .o

$(TARGET) : $(OBJS)
	g++ $(LDFLAGS) $(OBJS) $(LIBS) -o $(TARGET)
	strip $(TARGET)

.c.o:
	gcc $(CFLAGS) -c $*.c

.cpp.o:
	gcc $(CFLAGS) -c $*.cpp

.rc.res:
	windres $(RCFLAGS) $*.rc -o $*.res

clean: 
	@rm -rf *.exe *.o *.res *~

strip:
	strip $(TARGET)

depend: $(OBJS:.o=.cpp)
	-@rm depend.inc
	-@for i in $^; do\
		gcc $(CFLAGS) -MM $$i >> depend.inc;\
	done

-include depend.inc
