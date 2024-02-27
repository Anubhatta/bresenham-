#include <stdio.h>
#include <graphics.h>
#include <iostream>
using namespace std;

void drawline(int x0, int y0, int x1, int y1) 
{
    int dx, dy, p, x, y;
    dx = x1 - x0;
    dy = y1 - y0;
    x = x0;
    y = y0;
    p = 2 * dy - dx;
    while (x < x1) 
	{
        if (p >= 0)
		{
            putpixel(x, y, WHITE);
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        } 
		else 
		{
            putpixel(x, y, WHITE);
            p = p + 2 * dy;
        }
        
        x = x + 1;
    }
}

int main() 
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, NULL);
	int x0, y0, x1, y1;
    cout<<"enter starting point";
    cin>>x0>>y0;
    cout<<"enter ending point";
    cin>>x1>>y1;
    drawline(x0, y0, x1, y1);
    delay(2000);  // Add a delay to view the result
    closegraph();
    return 0;
}

