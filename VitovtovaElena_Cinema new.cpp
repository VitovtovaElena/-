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

int humanStep;
int trainStep;

int main ()
    {
    txCreateWindow (1024, 600);
    DrowFonNight ();
    DrowFonStarts();
    DrowTrainNight (10, 5,  200, 60, 560, 240);
    DrowTextOut (0);


    DrowFonSunrise ();
    DrowSun (5);
    DrowCloud (125,50,20);
    DrowTrainSunrise (10, 5,  200, 60, 560, 240);
    DrowRunHuman (500, 430);
    DrowSun (5);
    DrowRunHuman (600, 430);
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
    while (trainStep<=35)
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

         txSleep (1000);

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

        grusx+=10;
        vagonx+=10;
        linex+=10;
        vagonx_2+=10;
        kolesox+=10;

        if (trainStep%2==0)
          {
          kolesoy=550;
          }
        else
          {
          kolesoy=560;
           }
         trainStep++;
         txSleep (500);
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
    txPlaySound ("sounds/nochnyie-sverchki.wav", SND_ASYNC);
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

int Random(int min, int max)
    {
      return min + rand() % (max - min);
    }

void DrowFonStarts()
    {
    int starStep;
    starStep = 0;
    while (starStep<=30)
      {
        int starX = Random(20,720);
        int starY = Random(10,300);
        DrowStar(starX,starY);
        starStep++;
      }
    }

void DrowStar(int x, int y)
    {
    txSetFillColor ( RGB (250, 190, 250));
    txSetColor ( RGB (250, 190, 250), 5);
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
    txCircle (900, 100,40);
    }
