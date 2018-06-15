#include <stdio.h>
#include <windows.h>

int main()
{
    char title[200];
    HWND hWnd;
    RECT rect;
    POINT pt;
    HDC hdc;
    int i;
    HPEN hPen;
    //画棒
    GetConsoleTitleA(title,200);//1.获取窗口句柄
    hWnd = FindWindowA(NULL,title);//2.获取窗口句柄
    GetClientRect(hWnd,&rect);//3.获取窗口矩形区域大小
    pt.x = rect.right/2;
    pt.y = rect.bottom/2;
    hdc = GetDC(hWnd);//4.获取窗口DC
    Rectangle(hdc,GetStockObject(NULL,BRUSH));
    for(i=1;i<=100;i++)
    {
        hPen = CreatePen(PS_SOLID,1,RGB(10*i%250,20*i%250,30*i%250));
        SelectObject(hdc,hPen);
        Ellipse(hdc,pt.x-i,pt.y-i,pt.x+i,pt.y+i);
        DeleteObject(hPen);
    }
    return 0;
}

