@echo off
set /p var=input the cpp file's path:
set /p var1=input the name of the output-exe file:
C:\MinGW\mingw64\bin\g++.exe %var% -o %var1%
%var1%
pause
del %var1%.exe
@echo on