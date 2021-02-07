/*  Nama    : Fuad Sheri Firdaus
    NIM     : 181511044
*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<graphics.h>
#include<math.h>

#include "stroke.h";

//Fungsi Nilai Absolut
int abs (int n)
{
	return ( (n>0) ? n : ( n * (-1)));
}

void strLine(int x1, int y1, int x2, int y2)
{
    // Menghitung dx & dy
	int dx = x2 - x1;
	int dy = y2 - y1;

	// Menghitung steps yang dibutuhkan untuk generating pixels
	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	// Menghitung penambahan x & y
	float xInc = dx / (float) steps;
	float yInc = dy / (float) steps;

	// Put pixel
	float x = x1;
	float y = y1;
	for (int i = 0; i <= steps; i++)
	{
        putpixel (x,y,WHITE);//putpixel
		x += xInc;		 // increment x
		y += yInc;		 // increment y
	}
}



void dashLine(int x1, int y1, int x2, int y2)
{
    // Menghitung dx & dy
	int count1=1;
	int dx = x2 - x1;
	int dy = y2 - y1;

	// Menghitung steps yang dibutuhkan untuk generating pixels
	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	// Menghitung penambahan x & y
	float xInc = dx / (float) steps;
	float yInc = dy / (float) steps;

	// Put pixel
	float x = x1;
	float y = y1;
	for (int i = 0; i <= steps; i++)
	{
	    if(count1 < 5)
        {
            putpixel(x,y,7);
            count1++;
        }
        else
        {
            if(count1 == 15)
            {
                count1=1;
            }
            else
            {
                count1++;
            }

        }
        //putpixel (x,y,WHITE);//putpixel
		x += xInc;		 // increment x
		y += yInc;		 // increment y
	}
}

void dotLine(int x1, int y1, int x2, int y2)
{
    int count1=1;
    // Menghitung dx & dy
	int dx = x2 - x1;
	int dy = y2 - y1;

	// Menghitung steps yang dibutuhkan untuk generating pixels
	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	// Menghitung penambahan x & y
	float xInc = dx / (float) steps;
	float yInc = dy / (float) steps;

	// Put pixel
	float x = x1;
	float y = y1;
	for (int i = 0; i <= steps; i++)
	{
	    if(count1 < 2)
        {
            putpixel(x,y,7);
            count1++;
        }
        else
        {
            count1=1;
        }
        //putpixel (x,y,WHITE);//putpixel
		x += xInc;		 // increment x
		y += yInc;		 // increment y
	}
}

void dashdotLine(int x1, int y1, int x2, int y2)
{
    int count1=1;
    // Menghitung dx & dy
	int dx = x2 - x1;
	int dy = y2 - y1;

	// Menghitung steps yang dibutuhkan untuk generating pixels
	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	// Menghitung penambahan x & y
	float xInc = dx / (float) steps;
	float yInc = dy / (float) steps;

	// Put pixel
	float x = x1;
	float y = y1;
	for (int i = 0; i <= steps; i++)
	{
	    if(count1 < 7)
        {
            if(count1 == 5)
            {
                count1++;
            }
            else
            {
                putpixel(x,y,7);
                count1++;
            }
        }
        //putpixel (x,y,WHITE);//putpixel
		x += xInc;		 // increment x
		y += yInc;		 // increment y
	}
}

void blackLine(int x1, int y1, int x2, int y2)
{
    // Menghitung dx & dy
	int dx = x2 - x1;
	int dy = y2 - y1;

	// Menghitung steps yang dibutuhkan untuk generating pixels
	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	// Menghitung penambahan x & y
	float xInc = dx / (float) steps;
	float yInc = dy / (float) steps;

	// Put pixel
	float x = x1;
	float y = y1;
	for (int i = 0; i <= steps; i++)
	{
        putpixel (x,y,BLACK);//putpixel
		x += xInc;		 // increment x
		y += yInc;		 // increment y
	}
}
