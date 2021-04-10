#include "TXLib.h"

void Night();
void DrowTextOut (int dvig);
void Fon ();
void Train ();
void Human (int x, int y);
void DrowCloud (int dvigX, int y, int radius);

int main ()
    {
    txCreateWindow (1024, 600);
    Night();
    Train ();
    DrowTextOut (0);
    Fon ();
    Human (400, 300);
    Train ();
    DrowCloud (125,50,20);
    DrowCloud (125,170,20);
    DrowCloud (400,80,20);
    DrowCloud (300,50,20);


    return 0;
    }


void Fon ()
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

    //txSetFillColor (TX_YELLOW);
    //txSetColor(TX_YELLOW);
    //txCircle (900, 100,50);

    txSetColor (TX_MAGENTA, 5);
    txLine (0, 560, 1024, 560);
    txLine (0, 575, 1024, 575);
    }

void Train ()
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

void Human (int x, int y)
     {
     txSetFillColor (TX_BLACK);
     txSetColor (TX_LIGHTCYAN);
     txCircle (x, y-50, 20);
     txTriangle (x, y-40, x-50, y+40, x+50, y+40);
     }

void DrowCloud (int dvigX, int y, int radius)
     {
     while(dvigX<1030)
     {
     txSetFillColor (TX_WHITE);
     txSetColor (TX_WHITE);
     txCircle (dvigX-25, y, radius);
     txCircle (dvigX, y, radius);
     txCircle (dvigX+25, y, radius);
     txSleep (500);
     txSetFillColor (TX_LIGHTCYAN);
     txSetColor (TX_LIGHTCYAN);
     txCircle (dvigX-25, y, radius);
     txCircle (dvigX, y, radius);
     txCircle (dvigX+25, y, radius);
     dvigX+=50;
     }
     }
void DrowTextOut (int dvig)
     {
     txSelectFont ("Times New Roman", 60);

     while (dvig< 1030)
     {
     txSetColor (TX_PINK);
     txTextOut (dvig, 100, "Рассвет. Закат");
     txSleep (500);
     txSetColor (TX_BLUE);
     txTextOut (dvig, 100, "Рассвет. Закат");
     dvig+=50;
     }
     }
void Night ()
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
    }
