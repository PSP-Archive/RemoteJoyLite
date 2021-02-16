@echo off
set DESTNAME=RemoteJoyLite_019

mkdir %DESTNAME%

pushd RemoteJoyLite_pc
cp libusb0.dll ../%DESTNAME%/libusb0.dll
make clean
make LANGUAGE=LANG_EN
cp RemoteJoyLite.exe ../%DESTNAME%/RemoteJoyLite_en.exe
make clean
make LANGUAGE=LANG_JP
cp RemoteJoyLite.exe ../%DESTNAME%/RemoteJoyLite.exe
popd

pushd RemoteJoyLite_psp
make clean
make
cp RemoteJoyLite.prx ../%DESTNAME%/RemoteJoyLite.prx
popd

pushd %DESTNAME%
zip -9 -r ../%DESTNAME%.zip *
popd
