#include <graphics.h>

int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   setcolor(DARKGRAY);

   // TV Body
   rectangle(100, 100, 600, 400);

   // Screen
   setfillstyle(SOLID_FILL, BLACK);
   floodfill(101, 101, DARKGRAY);

   // Stand
   rectangle(300, 400, 400, 450);
   floodfill(301, 401, DARKGRAY);
   line(250, 450, 450, 450);

   delay(50000000);
   closegraph();
   return 0;
}
