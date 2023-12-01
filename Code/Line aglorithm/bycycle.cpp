#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <bits/stdc++.h>

// Driver code
int main()
{
    int gd = DETECT, gm, a;

    // Path of the program
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Move the cycle
    int i = 100;
    //for (i = 0; i < 2; i++) {
        // Upper body of cycle
        line(50  , 405, 100  , 405);
        line(75  , 375, 125  , 375);
        line(50  , 405, 75  , 375);
        line(100  , 405, 100  , 345);
        line(150  , 405, 100  , 345);
        line(75  , 345, 75  , 370);
        line(70  , 370, 80  , 370);
        line(80  , 345, 100  , 345);

        // Wheel
        circle(150  , 405, 30);
        circle(100 , 405 , 10);
        circle(50  , 405, 30);

//         //Road
//        line(0, 436, getmaxx(), 436);

        // Stone
//        rectangle(getmaxx() - i, 436,
//                  650 - i, 431);

        // Stop the screen for 10 secs
        delay(10000000);

        // Clear the screen
        cleardevice();
    //}

    getch();

   closegraph();
}
