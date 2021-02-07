#include "shape.h"
#include "stroke.h"


#define PI 3.14159265



void persegi(int x1, int y1, int panjang, int lebar)
{
    int x2,y2;
    x2=x1+panjang;
    y2=y1+lebar;
    //garis sumbu x
    strLine(x1,y1,x2,y1);
    strLine(x1,y2,x2,y2);
    //garis sumbu y
    strLine(x1,y1,x1,y2);
    strLine(x2,y1,x2,y2);
}

void jajarGejang(int x1, int y1, int tinggi, int panjang)
{
    int x2,y2;
    x2=x1+panjang;
    y2=y1+tinggi;

    //sumbu x
    dashLine(x1-panjang,y1,x2,y1);
    dashLine(x2-panjang,y2,x2+panjang,y2);
    //sumbu y
    dashLine(x1-panjang,y1,x2-panjang,y2);
    dashLine(x2,y1,x2+panjang,y2);

}

void belahKetupat(int x1, int y1, int d1, int d2)
{
    int x2,x3,y2,y3;
    x3 = x1+d1;
    d1 = d1/2;
    x2 = x1+d1;
    //x2 = x1 + tinggi;
    //x3 = x2 + tinggi;
    d2 = d2/2;
    y2 = y1 - d2;
    y3 = rotasiY(x1,y1,x2,y2,180);


    strLine(x1,y1,x2,y2);
    strLine(x2,y2,x3,y1);
    //strLine(x1,y1,x3,y1);

    strLine(x1,y1,x2,y3);
    strLine(x2,y3,x3,y1);
}

void trapesium(int x1, int y1, int tinggi, int p1, int p2)
{
    int x2,x3,pSegitiga;
    x2 = x1+p1;
    pSegitiga = p2-p1;
    pSegitiga = pSegitiga/2;

    segitigaKiri(x1-pSegitiga,y1+tinggi,tinggi);
    persegi(x1,y1,p1,tinggi);
    segitigaKanan(x2-pSegitiga+1,y1+tinggi,tinggi);

    blackLine(x1,y1+1,x1,y1+tinggi-1);
    blackLine(x1+p1,y1+1,x1+p1,y1+tinggi-1);
}

void segitigaKiri(int x1, int y1, int tinggi)
{
    int x2,x3,y2;
    x2 = x1 + tinggi;
    x3 = rotasiX(x1,y1,x2,y1,300);
    y2 = rotasiY(x1,y1,x2,y2,270);

    strLine(x1,y1,x2,y1);
    strLine(x1,y1,x3,y2);
    //strLine(x3,y2,x2,y1);
}

void segitigaKanan(int x1, int y1, int tinggi)
{
    int x2,x3,y2;
    x2 = x1 + tinggi;
    x3 = rotasiX(x1,y1,x2,y1,300);
    y2 = rotasiY(x1,y1,x2,y2,270);

    strLine(x1,y1,x2,y1);
    //strLine(x1,y1,x3,y2);
    strLine(x3,y2,x2,y1);
}

void segitiga(int x1, int y1, int tinggi)
{
    int x2,x3,y2;
    x2 = x1 + tinggi;
    x3 = rotasiX(x1,y1,x2,y1,300);
    y2 = rotasiY(x1,y1,x2,y2,270);

    strLine(x1,y1,x2,y1);
    strLine(x1,y1,x3,y2);
    strLine(x3,y2,x2,y1);
}

void lingkaran(int x1, int y1, int radius, int warna)
{
    int xc,yc,r,x,y,p;
    xc = x1;
    yc = y1;
    r = radius;

    x=0;
	y=r;
	p=1-r;
	while(x<y)
	{
	    //N
        putpixel(xc+x,yc-y,warna);//NE
        putpixel(xc-x,yc-y,warna);//NW
        //E
        putpixel(xc+y,yc-x,warna);//NE
        putpixel(xc+y,yc+x,warna);//SE
	    //S
	    putpixel(xc+x,yc+y,warna);//SE
	    putpixel(xc-x,yc+y,warna);//SW
        //W
        putpixel(xc-y,yc-x,warna);//NW
        putpixel(xc-y,yc+x,warna);//SW

		if(p<0)
		{
			x++;
			p=p+2*x+1;
		}
		else
		{
			x++;
			y--;
			p=p+2*(x-y)+1;
		}
	}

}

void CreateEllips(int x0, int y0, int rx, int ry)
{
	int x, y;
	int p, px, py;
	x = 0;
	y = ry;
	putpixel(x0 + x, y0 + y, 1);
	putpixel(x0 + x, y0 - y, 2);
	putpixel(x0 - x, y0 + y, 3);
	putpixel(x0 - x, y0 - y, 4);
	p = (ry * ry) - (rx * rx * ry) + (rx * rx * 0.25 );
	px = 0;
	py = 2 * rx * rx * y;

	while(px < py)
        {
		x++;
		px = px + (2 * ry * ry);
		if(p >= 0)
		{
			y = y - 1;
			py = py - (2 * rx * rx);
			p = p + (ry * ry) + px - py;
		}
		else
        {
			p = p + (ry * ry) + px;
		}
		putpixel(x0 + x, y0 + y, 1);
        putpixel(x0 + x, y0 - y, 2);
        putpixel(x0 - x, y0 + y, 3);
        putpixel(x0 - x, y0 - y, 4);
	}

	putpixel(x0 + x, y0 + y, 1);
	putpixel(x0 + x, y0 - y, 2);
	putpixel(x0 - x, y0 + y, 3);
	putpixel(x0 - x, y0 - y, 4);

	p = (ry * ry) * (x + 0.5) * (x + 0.5) + ((rx * rx) * (y - 1) * (y - 1)) - (rx * rx * ry * ry);

	while(y > 0)
    {
		y--;
		py = py - (2 * (rx * rx));
		if(p <= 0)
		{
			x++;
			px = px + (2 * ry * ry);
			p = p + (rx * rx) + px - py;
		}
        else
        {
			p = p + (rx * rx) - py;
		}
		putpixel(x0 + x, y0 + y, 1);
        putpixel(x0 + x, y0 - y, 2);
        putpixel(x0 - x, y0 + y, 3);
        putpixel(x0 - x, y0 - y, 4);
	}
}


int rotasiX(int x1, int y1, int x2, int y2, int deg)
{
    double vsin, vcos;
    int pr;

	vcos = cos(deg * (PI / 180.0));
	vsin = sin(deg * (PI / 180.0));

	pr = (vcos * (x2 - x1)) + (-vsin * (y2 - y1)) + x1;

	return pr;
}

int rotasiY(int x1, int y1, int x2, int y2, int deg)
{
    double vsin, vcos;
    int pr;

	vcos = cos(deg * (PI / 180.0));
	vsin = sin(deg * (PI / 180.0));

	pr = (vsin * (x2 - x1)) + (vcos * (y2 - y1)) + y1;

	return pr;
}

void PlotRotation(int x0, int y0, int x, int y, int deg) {
	int x2,y2;

	x2 = rotasiX(x0, y0, x0 + x , y0 + y, deg);
	y2 = rotasiY(x0, y0, x0 + x , y0 + y, deg);
	putpixel(x2,y2,CYAN);

	x2 = rotasiX(x0, y0, x0 + x , y0 - y, deg);
	y2 = rotasiY(x0, y0, x0 + x , y0 - y, deg);
	putpixel(x2,y2,CYAN);

	x2 = rotasiX(x0, y0, x0 - x , y0 + y, deg);
	y2 = rotasiY(x0, y0, x0 - x , y0 + y, deg);
	putpixel(x2,y2,CYAN);

	x2 = rotasiX(x0, y0, x0 - x , y0 - y, deg);
	y2 = rotasiY(x0, y0, x0 - x , y0 - y, deg);
	putpixel(x2,y2,CYAN);
}

//tambah definisi void sm parameter
void RotationEllips(int x0, int y0, int rx, int ry, int deg) {
	int x, y;
	int p, px, py;
	x = 0;
	y = ry;
	PlotRotation(x0, y0, x, y, deg);
	p = (ry * ry) - (rx * rx * ry) + (rx * rx * 0.25 );
	px = 0;
	py = 2 * rx * rx * y;

	while(px < py) {
		x++;
		px = px + (2 * ry * ry);
		if(p >= 0) {
			y = y - 1;
			py = py - (2 * rx * rx);
			p = p + (ry * ry) + px - py;
		} else {
			p = p + (ry * ry) + px;
		}
		PlotRotation(x0, y0, x, y, deg);
	}

	PlotRotation(x0, y0, x, y, deg);

	p = (ry * ry) * (x + 0.5) * (x + 0.5) + ((rx * rx) * (y - 1) * (y - 1)) - (rx * rx * ry * ry);

	while(y > 0) {
		y--;
		py = py - (2 * (rx * rx));
		if(p <= 0) {
			x++;
			px = px + (2 * ry * ry);
			p = p + (rx * rx) + px - py;
		} else {
			p = p + (rx * rx) - py;
		}
		PlotRotation(x0, y0, x, y, deg);
	}
}
