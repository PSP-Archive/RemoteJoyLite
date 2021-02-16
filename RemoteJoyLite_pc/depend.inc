WinMain.o: WinMain.cpp Direct3D.h DirectInput.h DebugFont.h Setting.h \
  RemoteJoyLite.h WinMain.h Wave.h Macro.h
RemoteJoyLite.o: RemoteJoyLite.cpp Direct3D.h DirectInput.h DebugFont.h \
  RemoteJoyLite.h Bitmap.h Movie.h Wave.h Setting.h ../remotejoy.h
Direct3D.o: Direct3D.cpp Direct3D.h
DirectInput.o: DirectInput.cpp DirectInput.h
DebugFont.o: DebugFont.cpp DebugFont.h Direct3D.h
FontData_5x5.o: FontData_5x5.cpp fontdata.h
Bitmap.o: Bitmap.cpp Bitmap.h
Movie.o: Movie.cpp Bitmap.h Movie.h Direct3D.h DirectInput.h Setting.h
Wave.o: Wave.cpp Direct3D.h DirectInput.h DebugFont.h Setting.h
Macro.o: Macro.cpp DebugFont.h Direct3D.h RemoteJoyLite.h Macro.h \
  DirectInput.h Setting.h
Setting.o: Setting.cpp RemoteJoyLite.h Direct3D.h Macro.h DirectInput.h \
  Setting.h Setting_Joy.h Setting_Key.h Setting_Etc.h Setting_Filt.h \
  Setting_Capt.h Setting_PSP.h Setting_Macro.h Setting.dat ../remotejoy.h
Setting_Joy.o: Setting_Joy.cpp Setting.h DirectInput.h Setting_Joy.h \
  Setting_Joy.dat
Setting_Key.o: Setting_Key.cpp Setting.h DirectInput.h Setting_Key.h \
  Setting_Key.dat
Setting_Etc.o: Setting_Etc.cpp Setting.h DirectInput.h WinMain.h \
  Setting_Etc.h Setting_Etc.dat
Setting_Filt.o: Setting_Filt.cpp Setting.h DirectInput.h RemoteJoyLite.h \
  Direct3D.h WinMain.h Setting_Filt.h Setting_Filt.dat
Setting_Capt.o: Setting_Capt.cpp Setting.h DirectInput.h Bitmap.h \
  Setting_Capt.h Setting_Capt.dat
Setting_PSP.o: Setting_PSP.cpp Setting.h DirectInput.h RemoteJoyLite.h \
  Direct3D.h Setting_PSP.h Setting_PSP.dat
Setting_Macro.o: Setting_Macro.cpp Setting.h DirectInput.h \
  Setting_Macro.h Setting_Macro.dat
