//======================================================================================================
// Cinema__Sunrise. Night
//author: Vitovtova Elena, Samara
//======================================================================================================
#include "stdio.h"
#include "TXLib.h"

int Random (int min, int max);
void DrawFonNight ();
void DrawTextOut (int dvigx);
void DrawFonSunrise ();
void DrawFonStarts ();
void DrawTrainNight (int cargox, int vanx, int linex, int wheelx, int wheely, int vanx_2);
void DrawTrainSunrise (int cargox, int vanx, int linex, int wheelx, int wheely, int vanx_2);
void DrawStar (int x, int y);
void DrawRunHuman  (int x, int y);
void Human (int x, int y, COLORREF color);
void DrawCloud (int dvigX, int y, int radius);
void DrawSun (int dop);
void DrawLake ();
void DrawFlowerNight (int x0, int y0, int y1);
void DrawFlowerSunrise (int x0, int y0, int y1);
void DrawTextTitr ();
void DrawFlower (int x0, int y0, int y1);
void DrawFire (int thickness);



int main ()
    {
    txCreateWindow (1024, 600);
    DrawFonNight ();
    DrawFonStarts ();
    DrawFlowerNight (50, 400, 360);
    DrawFlowerNight (720, 400, 360);
    DrawFlowerNight (200, 450, 410);
    DrawFlowerNight (620, 400, 360);
    DrawFlowerNight (700, 450, 410);
    DrawTrainNight (10, 5,  200, 60, 560, 240);
    DrawTextOut (0);

    DrawFonSunrise ();
    DrawFlowerSunrise (50, 400, 360);
    DrawFlowerSunrise (720, 400, 360);
    DrawFlowerSunrise (200, 450, 410);
    DrawFlowerSunrise (620, 400, 360);
    DrawFlowerSunrise (700, 450, 410);
    DrawTrainNight (10, 5,  200, 60, 560, 240);
    DrawSun (5);
    DrawCloud (125,50,20);
    DrawSun (5);
    DrawTrainSunrise (10, 5,  200, 60, 560, 240);
    DrawRunHuman (0, 430);
    DrawRunHuman (600, 430);
    DrawTrainNight (10, 5,  200, 60, 560, 240);
    DrawCloud (400,80,20);
    DrawSun (5);
    DrawTextTitr ();

    return 0;
    }

void DrawFonSunrise ()
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

    DrawLake ();

    }

void DrawTrainNight (int cargox, int vanx, int linex, int wheelx, int wheely, int vanx_2)
    {
    txSetFillColor (TX_ORANGE);
    txSetColor (TX_ORANGE);
    txEllipse (cargox, 430, cargox + 185, 520);

    txSetFillColor (TX_GRAY);
    txSetColor (TX_GRAY);
    txRectangle (vanx, 460, vanx + 195, 550);

    txSetColor (TX_GRAY, 7);
    txLine (linex, 510, linex + 40, 510);

    txSetFillColor (TX_GRAY);
    txSetColor (TX_GRAY);
    txRectangle (vanx_2, 380, vanx_2 + 70, 550);
    txRectangle (vanx_2 + 70, 460, vanx_2 + 200, 550);

    txSetColor (TX_BLACK, 3);
    txRectangle (vanx_2 + 30, 400, vanx_2+60, 470);

    txSetFillColor (TX_NULL);
    txSetColor ( TX_BLACK, 3);
    txCircle (wheelx, wheely, 15);
    txCircle (wheelx + 100, wheely, 15);
    txCircle (wheelx + 220, wheely, 15);
    txCircle (wheelx + 330, wheely, 15);
    }

void DrawTrainSunrise (int cargox, int vanx, int linex, int wheelx, int wheely, int vanx_2)
    {
    int trainStep=1;
    while (trainStep<=50)
        {
        txSetColor (TX_MAGENTA, 5);
        txLine (0, 560, 1024, 560);
        txLine (0, 575, 1024, 575);

        txSetFillColor (TX_ORANGE);
        txSetColor (TX_ORANGE);
        txEllipse (cargox, 430, cargox + 185, 520);

        txSetFillColor (TX_GRAY);
        txSetColor (TX_GRAY);
        txRectangle (vanx, 460, vanx + 195, 550);

        txSetColor (TX_GRAY, 7);
        txLine (linex, 510, linex + 40, 510);

        txSetFillColor (TX_GRAY);
        txSetColor (TX_GRAY);
        txRectangle (vanx_2, 380, vanx_2 + 70, 550);
        txRectangle (vanx_2 + 70, 460, vanx_2 + 200, 550);

        txSetColor (TX_BLACK, 3);
        txRectangle (vanx_2 + 30, 400, vanx_2 + 60, 470);

        txSetFillColor (TX_NULL);
        txSetColor ( TX_BLACK, 3);
        txCircle (wheelx, wheely, 15);
        txCircle (wheelx + 100, wheely, 15);
        txCircle (wheelx + 220, wheely, 15);
        txCircle (wheelx + 330, wheely, 15);

        txSleep (200);

        txSetFillColor (TX_GREEN);
        txSetColor (TX_GREEN);
        txEllipse (cargox, 430, cargox + 185, 520);
        txRectangle (vanx, 460, vanx + 195, 550);
        txRectangle (vanx_2, 380, vanx_2 + 70, 550);
        txRectangle (vanx_2 + 70, 460, vanx_2 + 200, 550);
        txRectangle (vanx_2 + 30, 400, vanx_2 + 60, 470);

        txSetColor (TX_GREEN, 7);
        txLine (linex, 510, linex+40, 510);

        txSetFillColor (TX_NULL);
        txSetColor ( TX_DARKGRAY, 3);
        txCircle (wheelx, wheely, 15);
        txCircle (wheelx + 100, wheely, 15);
        txCircle (wheelx + 220, wheely, 15);
        txCircle (wheelx + 330, wheely, 15);

        cargox += 20;
        vanx += 20;
        linex += 20;
        vanx_2 += 20;
        wheelx += 20;

        if (trainStep%2 == 0)
            {
            wheely = 550;
            }
        else
            {
            wheely = 560;
            }
        trainStep ++;
        DrawFlower (50, 400, 360);
        DrawFlower (720, 400, 360);
        DrawFlower (200, 450, 410);
        DrawFlower (620, 400, 360);
        DrawFlower (700, 450, 410);
        DrawLake();
        }
    }

void Human (int x, int y,COLORREF color)
    {
    txSetFillColor (color);
    txSetColor (color,3);
    txCircle (x, y - 30, 15);
    txLine (x, y - 10, x, y + 20);
    txLine (x - 20, y, x + 20, y);
    txLine (x, y + 40, x + 20, y + 60);
    txLine (x, y + 40, x - 20, y + 60);
    }

void DrawRunHuman(int x, int y)
    {
    int humanStep = 0;
    while (humanStep <= 1000)
         {
         Human(x+humanStep,y,TX_BLACK);
         txSleep(200);
         Human(x + humanStep,y,TX_GREEN);
         humanStep += 20;
         DrawLake();
         DrawFlower (50, 400, 360);
         DrawFlower (720, 400, 360);
         DrawFlower (200, 450, 410);
         DrawFlower (620, 400, 360);
         DrawFlower (700, 450, 410);
          }
    }

void DrawCloud (int dvigX, int y, int radius)
    {
    while(dvigX < 1030)
         {
         txSetFillColor (TX_WHITE);
         txSetColor (TX_WHITE);
         txCircle (dvigX - 25, y, radius);
         txCircle (dvigX,    y, radius);
         txCircle (dvigX + 25, y, radius);
         txSleep (500);

         txSetFillColor (TX_LIGHTCYAN);
         txSetColor (TX_LIGHTCYAN);
         txCircle (dvigX - 25, y, radius);
         txCircle (dvigX,    y, radius);
         txCircle (dvigX + 25, y, radius);
         dvigX += 50;
          }
    }
void DrawTextOut (int dvigx)
    {
    txSelectFont ("Times New Roman", 60);

    while (dvigx < 1030)
         {
         txSetColor (TX_PINK, 3);
         txSetFillColor (RGB (255, 0, 0));
         txTextOut (dvigx, 100, "Sunrise. Night");
         DrawFire (12);
         txSleep (500);
         DrawFire (5);
         txSetColor (TX_BLUE, 3);
         txSetFillColor (TX_BLUE);
         txTextOut (dvigx, 100, "Sunrise. Night");
         dvigx += 30;
         }
    }
void DrawFonNight ()
    {
    txPlaySound ("sounds/nochnyie-sverchki.wav", SND_ASYNC);
    txSetFillColor (TX_BLUE);
    txSetColor (TX_BLUE);
    txRectangle (0, 0, 1024, 300);

    txSetFillColor (TX_GREEN);
    txSetColor (TX_GREEN);
    txRectangle (0, 300, 1024, 550);

    DrawLake();

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

void DrawFonStarts ()
    {
    int starStep;
    starStep = 0;
    while (starStep <= 30)
        {
        int starX = Random (20,900);
        int starY = Random (10,300);
        DrawStar (starX, starY);
        starStep ++;
        }
    }

void DrawStar (int x, int y)
    {
    txSetFillColor ( RGB (250, 190, 250));
    txSetColor ( RGB (250, 190, 250), 3);
    txLine (x - 3, y,  x + 3, y);
    txLine (x, y - 4,  x, y + 4);
    }

void DrawSun (int dop)
    {
    while (dop <= 30)
         {
         if (dop%5 == 0)
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
         dop += 1;
         }
    txSetFillColor (TX_YELLOW);
    txSetColor(TX_YELLOW);
    txCircle (900, 100,50);
    DrawFlowerSunrise (50, 400, 360);
    DrawFlowerSunrise (720, 400, 360);
    DrawFlowerSunrise (200, 450, 410);
    DrawFlowerSunrise (620, 400, 360);
    DrawFlowerSunrise (700, 450, 410);
    }

void DrawTextTitr ()
    {
    txSelectFont ("Times New Roman", 20);
    txSetColor (TX_PINK);
    txTextOut (0, 300, "Выполнила: Витовтова Елена Васильевна, Самара. ");
    }

void DrawLake ()
    {
    txSetColor (RGB (100, 100, 255));
    txSetFillColor (RGB (100, 100, 255));
    txEllipse (300, 350, 600, 450);
    }

void DrawFlowerNight (int x0, int y0, int y1)
    {
    txSetColor (RGB (121, 255, 76), 3);
    txLine (x0,  y0, x0, y1);
    txSetColor (RGB (255, 80, 76));
    txSetFillColor (RGB (255, 87, 35));
    txCircle (x0, y1, 7);
    }

void DrawFlowerSunrise (int x0, int y0, int y1)
    {
    txSetColor (RGB (121, 255, 76), 3);
    txLine (x0, y0, x0, y1);

    for (int i = 20; i <= 255; i += 30)
        {
        txSetColor (RGB (i, 0, 0));
        txSetFillColor (RGB (i, 0, 0));
        txCircle (x0, y1, 7);
        txCircle (x0 + 14, y1, 7);
        txCircle (x0 - 14, y1, 7);
        txCircle (x0, y1 + 14, 7);
        txCircle (x0, y1 - 14, 7);
        txSleep (50);
        }
    }

void DrawFlower (int x0, int y0, int y1)
    {
    txSetColor (RGB (121, 255, 76), 3);
    txLine (x0, y0, x0, y1);

    txSetColor (RGB (255, 0, 0));
    txSetFillColor (RGB (255, 0, 0));
    txCircle (x0, y1, 7);
    txCircle (x0 + 14, y1, 7);
    txCircle (x0 - 14, y1, 7);
    txCircle (x0, y1 + 14, 7);
    txCircle (x0, y1 - 14, 7);
    }

void DrawFire (int thickness)
    {
    txSetColor (RGB (158, 128, 0));
    txSetFillColor (RGB (158, 128, 0));
    txRectangle (360, 340, 390, 350);
    txSetColor (RGB (255, 0, 0), thickness);
    txSetFillColor (RGB (255, 128, 0));
    const POINT triangle[3] = {{350, 340}, {400, 340}, {375, 280}};
    txPolygon (triangle, 3);
    }
