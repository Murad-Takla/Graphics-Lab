#include<graphics.h>
#include<bits/stdc++.h>

int main(){

     int gd = DETECT, gm, a;

    // Path of the program
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
     int x = 300, y = 200, radius = 50;

      for (int i = 0; i <= 180; ++i) {
        int current_x = x + radius * cos(M_PI * i / 180);
        int current_y = y + radius * sin(M_PI * i / 180);
        putpixel(current_x, current_y, WHITE);
    }

    line(250 , 200 , 350 , 200 ) ;

    circle(300 , 200 , 80);
  // circle(250, 170 , 5 );
   // circle(350 , 170 , 5);

   floodfill(250 , 170 , WHITE);
   floodfill(350, 170 , WHITE);

    getch();

    closegraph();



    }
