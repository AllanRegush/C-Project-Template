@echo off

if "%2" == "1" (
	set release=1
) else (
	set release=0
)

if %release% EQU 0 (
	set compiler_flags=-Od
	set compiler_defines=-DDEBUG
) else (
	set compiler_flags=-O2
	set compiler_defines=
)


set compiler_settings = %compiler_flags% %compiler_defines%

mkdir build 2> NUL
pushd build
cl %compiler_settings% "..\src\main.cpp" /link kernel32.lib
popd 