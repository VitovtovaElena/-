//======================================================================================================
// Cinema__Sunrise. Night
//author: Vitovtova Elena, Samara
//======================================================================================================

#include "stdio.h"
#include "TXLib.h"

int Random(int min, int max);
void DrowFonNight ();
void DrowTextOut (int dvigx);
void DrowFonSunrise ();
void DrowFonStarts();
void DrowTrainNight (int grusx, int vagonx, int linex, int kolesox, int kolesoy, int vagonx_2);
void DrowTrainSunrise (int grusx, int vagonx, int linex, int kolesox, int kolesoy, int vagonx_2);
void DrowStar (int x, int y);
void DrowRunHuman(int x, int y);
void Human (int x, int y, COLORREF color);
void DrowCloud (int dvigX, int y, int radius);
void DrowSun (int dop);
void DrowLake ();
void DrowReeds (int stx, int sty, int ovx_0, int ovy_0, int ovx_1, int ovy_1);
void DrowFlowerNight (int x0, int y0, int y1);
void DrowFlowerSunrise (int x0, int y0, int y1);


int humanStep;
int trainStep;

int main ()
    {
    txCreateWindow (1024, 600);
    DrowFonNight ();
    DrowFonStarts ();
    DrowFlowerNight (50, 400, 360);
    DrowFlowerNight (720, 400, 360);
    DrowFlowerNight (200, 450, 410);
    DrowFlowerNight (620, 400, 360);
    DrowFlowerNight (700, 450, 410);
    DrowTrainNight (10, 5,  200, 60, 560, 240);
    DrowTextOut (0);

    DrowFonSunrise ();
    DrowFlowerSunrise (50, 400, 360);
    DrowFlowerSunrise (720, 400, 360);
    DrowFlowerSunrise (200, 450, 410);
    DrowFlowerSunrise (620, 400, 360);
    DrowFlowerSunrise (700, 450, 410);
    DrowTrainNight (10, 5,  200, 60, 560, 240);
    DrowSun (5);
    DrowCloud (125,50,20);
    DrowSun (5);
    DrowTrainSunrise (10, 5,  200, 60, 560, 240);
    DrowRunHuman (0, 430);
    DrowRunHuman (600, 430);
    DrowCloud (125,50,20);
    DrowSun (5);
    DrowTrainNight (10, 5,  200, 60, 560, 240);
    DrowRunHuman (200, 430);
    DrowRunHuman (0, 430);
    DrowCloud (400,80,20);
    DrowSun (5);
//    DrowTextTitr (0);

    return 0;
    }

void DrowFonSunrise ()
    {
    txPlaySound ("sounds/atmosfera-prirodyi-na-rassvete", SND_ASYNC);
    txSetFillColor (TX_LIGHTCYAN);
    txSetColor (TX_LIGHTCYAN);
    txRectangle (0, 0, 1024, 300);

    txSetFillColor (TX_GREEN);
    txSetColor (TX_GREEN);
    txRectangle (0, 300, 1024, 550);

    txSetFillColor (TX_DARKGRAY);
    txSetColor (TX_DARKGRAY);
    txRectangle (0, 550, 1024, 600);

    txSetColor (TX_MAGENTA, 5);
    txLine (0, 560, 1024, 560);
    txLine (0, 575, 1024, 575);

     txSetFillColor (TX_WHITE);
     txSetColor (TX_WHITE);
     txCircle  (300, 150 , 20);
     txCircle (330,  150, 20);
     txCircle (360, 150, 20);

    txSetFillColor (TX_WHITE);
     txSetColor (TX_WHITE);
     txCircle (600, 200, 20);
     txCircle (630,  200,  20);
     txCircle (660, 200,  20);

     DrowLake();
    }

void DrowTrainNight (int grusx, int vagonx, int linex, int kolesox, int kolesoy, int vagonx_2)
    {
     txSetFillColor (TX_ORANGE);
     txSetColor (TX_ORANGE);
     txEllipse (grusx, 430, grusx+185, 520);

     txSetFillColor (TX_GRAY);
     txSetColor (TX_GRAY);
     txRectangle (vagonx, 460, vagonx+195, 550);

     txSetColor (TX_GRAY, 7);
     txLine (linex, 510, linex+40, 510);

      txSetFillColor (TX_GRAY);
      txSetColor (TX_GRAY);
      txRectangle (vagonx_2, 380, vagonx_2+70, 550);
      txRectangle (vagonx_2+70, 460, vagonx_2+200, 550);

       txSetColor (TX_BLACK, 3);
       txRectangle (vagonx_2+30, 400, vagonx_2+60, 470);

       txSetFillColor (TX_NULL);
       txSetColor ( TX_BLACK, 3);
       txCircle (kolesox, kolesoy, 15);
       txCircle (kolesox+100, kolesoy, 15);
       txCircle (kolesox+220, kolesoy, 15);
       txCircle (kolesox+330, kolesoy, 15);
    }

void DrowTrainSunrise (int grusx, int vagonx, int linex, int kolesox, int kolesoy, int vagonx_2)
    {

    trainStep=1;
    while (trainStep<=50)
       {
       txSetColor (TX_MAGENTA, 5);
       txLine (0, 560, 1024, 560);
       txLine (0, 575, 1024, 575);

       txSetFillColor (TX_ORANGE);
       txSetColor (TX_ORANGE);
       txEllipse (grusx, 430, grusx+185, 520);

       txSetFillColor (TX_GRAY);
       txSetColor (TX_GRAY);
       txRectangle (vagonx, 460, vagonx+195, 550);

       txSetColor (TX_GRAY, 7);
       txLine (linex, 510, linex+40, 510);

        txSetFillColor (TX_GRAY);
        txSetColor (TX_GRAY);
        txRectangle (vagonx_2, 380, vagonx_2+70, 550);
        txRectangle (vagonx_2+70, 460, vagonx_2+200, 550);

         txSetColor (TX_BLACK, 3);
         txRectangle (vagonx_2+30, 400, vagonx_2+60, 470);

         txSetFillColor (TX_NULL);
         txSetColor ( TX_BLACK, 3);
         txCircle (kolesox, kolesoy, 15);
         txCircle (kolesox+100, kolesoy, 15);
         txCircle (kolesox+220, kolesoy, 15);
         txCircle (kolesox+330, kolesoy, 15);

         txSleep (200);

         txSetFillColor (TX_GREEN);
         txSetColor (TX_GREEN);
         txEllipse (grusx, 430, grusx+185, 520);
         txRectangle (vagonx, 460, vagonx+195, 550);
         txRectangle (vagonx_2, 380, vagonx_2+70, 550);
         txRectangle (vagonx_2+70, 460, vagonx_2+200, 550);
         txRectangle (vagonx_2+30, 400, vagonx_2+60, 470);

          txSetColor (TX_GREEN, 7);
          txLine (linex, 510, linex+40, 510);

         txSetFillColor (TX_NULL);
         txSetColor ( TX_DARKGRAY, 3);
         txCircle (kolesox, kolesoy, 15);
         txCircle (kolesox+100, kolesoy, 15);
         txCircle (kolesox+220, kolesoy, 15);
         txCircle (kolesox+330, kolesoy, 15);

        grusx+=20;
        vagonx+=20;
        linex+=20;
        vagonx_2+=20;
        kolesox+=20;

        if (trainStep%2==0)
          {
          kolesoy=550;
          }
        else
          {
          kolesoy=560;
           }
         trainStep++;
         DrowFlowerSunrise (50, 400, 360);
         DrowFlowerSunrise (720, 400, 360);
         DrowFlowerSunrise (200, 450, 410);
         DrowFlowerSunrise (620, 400, 360);
         DrowFlowerSunrise (700, 450, 410);
         DrowLake();
         }
    }

void Human (int x, int y,COLORREF color)
    {
    txSetFillColor (color);
    txSetColor (color,3);
    txCircle (x, y-30, 15);
    txLine (x, y-10, x, y+20);
    txLine (x-20, y, x+20, y);
    txLine (x, y+40, x+20, y+60);
    txLine (x, y+40, x-20, y+60);
    }

void DrowRunHuman(int x, int y)
    {
    int hmanStep=0;
    while (humanStep<=1000)
      {
        Human(x+humanStep,y,TX_BLACK);
        txSleep(200);
        Human(x+humanStep,y,TX_GREEN);
        humanStep+=20;
        DrowLake();
        DrowFlowerSunrise (50, 400, 360);
        DrowFlowerSunrise (720, 400, 360);
        DrowFlowerSunrise (200, 450, 410);
        DrowFlowerSunrise (620, 400, 360);
        DrowFlowerSunrise (700, 450, 410);
       }
     }

void DrowCloud (int dvigX, int y, int radius)
    {
    while(dvigX<1030)
     {
     txSetFillColor (TX_WHITE);
     txSetColor (TX_WHITE);
     txCircle (dvigX-25, y, radius);
     txCircle (dvigX,    y, radius);
     txCircle (dvigX+25, y, radius);
     txSleep (500);

     txSetFillColor (TX_LIGHTCYAN);
     txSetColor (TX_LIGHTCYAN);
     txCircle (dvigX-25, y, radius);
     txCircle (dvigX,    y, radius);
     txCircle (dvigX+25, y, radius);
     dvigX+=50;
     }
    }
void DrowTextOut (int dvigx)
    {
    txSelectFont ("Times New Roman", 60);
    while (dvigx< 1030)
     {
     txSetColor (TX_PINK);
     txTextOut (dvigx, 100, "Sunrise. Night");
     txSleep (500);
     txSetColor (TX_BLUE);
     txTextOut (dvigx, 100, "Sunrise. Night");
     dvigx+=50;
     }
    }
void DrowFonNight ()
    {
    txPlaySound ("sounds/nochnyie-sverchki.wav", SND_ASYNC);
    txSetFillColor (TX_BLUE);
    txSetColor (TX_BLUE);
    txRectangle (0, 0, 1024, 300);

    txSetFillColor (TX_GREEN);
    txSetColor (TX_GREEN);
    txRectangle (0, 300, 1024, 550);

    DrowLake();

    txSetFillColor (TX_DARKGRAY);
    txSetColor (TX_DARKGRAY);
    txRectangle (0, 550, 1024, 600);

    txSetColor (TX_MAGENTA, 5);
    txLine (0, 560, 1024, 560);
    txLine (0, 575, 1024, 575);

    txSetFillColor ( RGB ( 190, 190, 250));
    txSetColor( RGB ( 190, 190, 250));
    txCircle (900, 70,35);
    }

int Random (int min, int max)
    {
      return min + rand () % (max - min);
    }

void DrowFonStarts ()
    {
    int starStep;
    starStep = 0;
    while (starStep<=30)
      {
        int starX = Random (20,900);
        int starY = Random (10,300);
        DrowStar (starX,starY);
        starStep++;
      }
    }

void DrowStar (int x, int y)
    {
    txSetFillColor ( RGB (250, 190, 250));
    txSetColor ( RGB (250, 190, 250), 3);
    txLine (x-3, y, x+3, y);
    txLine (x,y-4, x, y+4);
    }

void DrowSun (int dop)
    {
    while (dop<=30)
      {
      if (dop%5==0)
         {
         txSetFillColor (TX_YELLOW);
         txSetColor(TX_YELLOW);
         txCircle (900, 100,50);
         txSleep (200);
         txSetFillColor (TX_LIGHTCYAN);
         txSetColor(TX_LIGHTCYAN);
         txCircle (900, 100,50);
         }
      else
         {
         txSetFillColor (TX_YELLOW);
         txSetColor(TX_YELLOW);
         txCircle (900, 100,30);
         txSleep (200);
         txSetFillColor (TX_LIGHTCYAN);
         txSetColor(TX_LIGHTCYAN);
         txCircle (900, 100,30);
         }
      dop+=1;
       }
    txSetFillColor (TX_YELLOW);
    txSetColor(TX_YELLOW);
     txCircle (900, 100,50);
     }

void DrowTextTitr (int dvigx)
    {
    txSelectFont ("Times New Roman", 50);
    while (dvigx< 1030)
       {
       txSetColor (TX_PINK);
       txTextOut (dvigx, 600, "Выполнила: Витовтова Елена Васильевна, Самара. МБОУ Школа № 27");
       txSleep (500);
       txSetColor (TX_GREEN);
       txTextOut (dvigx, 600, "Выполнила: Витовтова Елена Васильевна, Самара. МБОУ Школа № 27");
       dvigx+=50;
       }
    }

void DrowLake()
    {
    txSetColor (RGB (100, 100, 255));
    txSetFillColor (RGB (100, 100, 255));
    txEllipse (300, 350, 600, 450);
    }

//void DrowReeds (int stx, int sty, int ovx_0, int ovy_0, int ovx_1, int ovy_1)
   // {
     //txSetColor (RGB (121, 96, 76), 3);
     //txSetFillColor (RGB (133, 87, 35));

     //for  (int i=1; i<=5;  i+=0,5)
        //{
         //txline (x0, y0, )

void DrowFlowerNight (int x0, int y0, int y1)
    {
    txSetColor (RGB (121, 255, 76), 3);
    txLine (x0, y0, x0, y1);
    txSetColor (RGB (255, 80, 76));
    txSetFillColor (RGB (255, 87, 35));
    txCircle (x0, y1, 7);
    }

void DrowFlowerSunrise (int x0, int y0, int y1)
    {
    txSetColor (RGB (121, 255, 76), 3);
    txLine (x0, y0, x0, y1);

    for (int i=10; i<=255; i+=50)
      {
      txSetColor (RGB (i, 80, 76));
      txSetFillColor (RGB (i, 87, 35));
      txCircle (x0, y1, 7);
      txCircle (x0+14, y1, 7);
      txCircle (x0-14, y1, 7);
      txCircle (x0, y1+14, 7);
      txCircle (x0, y1-14, 7);
      }
    }

