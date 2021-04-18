#include "stdio.h"
#include "TXLib.h"


void DrowFonNight ();
void DrowTextOut (int dvigx);
void DrowFonSunrise ();
void DrowStar ();
void DrowTrain ();
void DrowRunHuman(int x, int y);
void Human (int x, int y, COLORREF color);
void DrowCloud (int dvigX, int y, int radius);
void DrowSun (int dop);
int humanStep;

int main ()
    {
    txCreateWindow (1024, 600);
    DrowFonNight ();
    DrowTrain ();
    DrowTextOut (0);
    DrowStar ();

    DrowFonSunrise ();
    DrowTrain ();
    DrowRunHuman (500, 430);
    DrowRunHuman (500, 450);
    DrowSun (5);
    DrowRunHuman (550, 430);
    DrowCloud (125,50,20);
    DrowSun (5);
    DrowCloud (125,170,20);
    DrowSun (5);
    DrowRunHuman (600, 430);
    DrowRunHuman (550, 430);
    DrowCloud (400,80,20);
    DrowSun (5);
    DrowCloud (300,50,20);

    return 0;
    }


void DrowFonSunrise ()
    {
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
    }

void DrowTrain ()
    {
    txSetFillColor (TX_ORANGE);
    txSetColor (TX_ORANGE);
    txEllipse (10, 430, 195, 520);

    txSetFillColor (TX_GRAY);
    txSetColor (TX_GRAY);
    txRectangle (5, 460, 200, 550);

    txSetColor (TX_GRAY, 7);
    txLine (200, 510, 240, 510);

    txSetFillColor (TX_NULL);
    txSetColor ( TX_BLACK, 3);
    txCircle (60, 560, 15);
    txCircle (160, 560, 15);
    txCircle (280, 560, 15);
    txCircle (390, 560, 15);

    txSetFillColor (TX_GRAY);
    txSetColor (TX_GRAY);
    txRectangle (240, 380, 330, 550);
    txRectangle (330, 460, 440, 550);

    txSetColor (TX_BLACK, 3);
    txRectangle (270, 400, 300, 470);
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
    while (humanStep<=300)
      {
        Human(x+humanStep,y,TX_BLACK);
        txSleep(100);
        Human(x+humanStep,y,TX_GREEN);
        humanStep+=20;
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
     txTextOut (dvigx, 100, "Рассвет. Закат");
     txSleep (500);
     txSetColor (TX_BLUE);
     txTextOut (dvigx, 100, "Рассвет. Закат");
     dvigx+=50;
     }
    }
void DrowFonNight ()
    {
    txSetFillColor (TX_BLUE);
    txSetColor (TX_BLUE);
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

    txSetFillColor ( RGB ( 190, 190, 250));
    txSetColor( RGB ( 190, 190, 250));
    txCircle (900, 70,35);
    }

void DrowStar()
    {
    txSetFillColor (RGB (190, 190, 250));
    txSetColor (RGB (190, 190, 250));
    POINT Star[5] = {{50,30}, {40, 20}, {75, 45}, {25, 15}, {60, 20}};
    txPolygon (Star, 5);
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
    txCircle (900, 100,40);
    }
