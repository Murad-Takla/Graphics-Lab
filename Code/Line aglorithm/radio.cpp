#include<graphics.h>
#include<bits/stdc++.h>
int main(){
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");

   line(200 , 200 , 350 , 150 );
   line(200 , 195 , 350 , 145);
   line(200 , 195 , 200 , 200);

   line(350, 150 , 500 , 200);
   line(350 , 145 , 500 , 195);
   line(350, 145 , 350 , 150);
   line(200 , 200 , 200 , 320);
   line(200 , 320 , 500 , 320);
   line(500 , 320 , 500 , 200);

   circle(325 , 285 , 4);
  line(500 , 195 , 500 , 200);


  rectangle( 320 , 240 , 380 , 320);


  rectangle( 320 , 180  ,  380 , 220);
  line(320 , 200 , 380 , 200) ;
  line(350 , 180 , 350 , 220);


     rectangle( 420 , 255  ,  480 , 300);

     line(420 , 280 ,  480 , 280 );
     line(450 , 255 , 450 , 300);


      rectangle( 220 , 255  ,  280 , 300);

      line(220 , 280 , 280 , 280);
      line(250 , 255 , 250 , 300 );

//


getch();
closegraph();
}

