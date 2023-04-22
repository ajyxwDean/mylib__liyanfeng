#include <stdio.h>
#include <windows.h>



int main(){
    static TCHAR szAppName[] = TEXT("HelloWin");
    HWND hwnd;
    MSG msg;
    WNDCLASS wndclass;
    wndclass.style               = CS_HREDRAW | CS_VREDRAW;
    wndclass.lpfnWndProc         = WndProc;
    return 0;
}