#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<graphics.h>

#include "stroke.h"
#include "shape.h"

void animasiSederhana()
{
    int sudut=0;
    int sudut2=360;
    int rLing;
    int lEllips=40;
    int wEllips;
    int scl=1;
    int x1,y1,x2,y2,x3,y3;
    int page = 0;
    x1=50;y1=300;
    x2=300;
    x3=550;
    y2=50;
    y3=550;
	initwindow(x3+50,y3+50,"Animasi Bunga Inspired by React.js");

	while(!kbhit())
    {
        wEllips=lEllips/3;
        rLing=wEllips-5;

        //Kalkulasi Ukuran Ellips
        if(scl==1)
        {
            lEllips++;
        }
        else
        {
            lEllips--;
        }

        //Logo Kiri ke Kanan
        //Animasi logo rotasi kanan
        RotationEllips(x1,y1,wEllips,lEllips,sudut);
        RotationEllips(x1,y1,wEllips-1,lEllips-1,sudut);
        RotationEllips(x1,y1,wEllips,lEllips,sudut+120);
        RotationEllips(x1,y1,wEllips-1,lEllips-1,sudut+120);
        RotationEllips(x1,y1,wEllips,lEllips,sudut+240);
        RotationEllips(x1,y1,wEllips-1,lEllips-1,sudut+240);

        //Animasi logo rotasi kiri
        RotationEllips(x1,y1,wEllips,lEllips,sudut2);
        RotationEllips(x1,y1,wEllips-1,lEllips-1,sudut2);
        RotationEllips(x1,y1,wEllips,lEllips,sudut2-120);
        RotationEllips(x1,y1,wEllips-1,lEllips-1,sudut2-120);
        RotationEllips(x1,y1,wEllips,lEllips,sudut2-240);
        RotationEllips(x1,y1,wEllips-1,lEllips-1,sudut2-240);

        //Logo Atas Kebawah
        //Rotasi Kanan
        RotationEllips(x2,y2,wEllips,lEllips,sudut);
        RotationEllips(x2,y2,wEllips-1,lEllips-1,sudut);
        RotationEllips(x2,y2,wEllips,lEllips,sudut+120);
        RotationEllips(x2,y2,wEllips-1,lEllips-1,sudut+120);
        RotationEllips(x2,y2,wEllips,lEllips,sudut+240);
        RotationEllips(x2,y2,wEllips-1,lEllips-1,sudut+240);

        //Rotasi Kiri
        RotationEllips(x2,y2,wEllips,lEllips,sudut2);
        RotationEllips(x2,y2,wEllips-1,lEllips-1,sudut2);
        RotationEllips(x2,y2,wEllips,lEllips,sudut2-120);
        RotationEllips(x2,y2,wEllips-1,lEllips-1,sudut2-120);
        RotationEllips(x2,y2,wEllips,lEllips,sudut2-240);
        RotationEllips(x2,y2,wEllips-1,lEllips-1,sudut2-240);

        //Logo Bawak Keatas
        //Rotasi Kanan
        RotationEllips(x2,y3,wEllips,lEllips,sudut);
        RotationEllips(x2,y3,wEllips-1,lEllips-1,sudut);
        RotationEllips(x2,y3,wEllips,lEllips,sudut+120);
        RotationEllips(x2,y3,wEllips-1,lEllips-1,sudut+120);
        RotationEllips(x2,y3,wEllips,lEllips,sudut+240);
        RotationEllips(x2,y3,wEllips-1,lEllips-1,sudut+240);

        //Rotasi Kiri
        RotationEllips(x2,y3,wEllips,lEllips,sudut2);
        RotationEllips(x2,y3,wEllips-1,lEllips-1,sudut2);
        RotationEllips(x2,y3,wEllips,lEllips,sudut2-120);
        RotationEllips(x2,y3,wEllips-1,lEllips-1,sudut2-120);
        RotationEllips(x2,y3,wEllips,lEllips,sudut2-240);
        RotationEllips(x2,y3,wEllips-1,lEllips-1,sudut2-240);



        //Logo Kanan ke Kiri
        //Animasi logo rotasi kanan
        RotationEllips(x3,y1,wEllips,lEllips,sudut);
        RotationEllips(x3,y1,wEllips-1,lEllips-1,sudut);
        RotationEllips(x3,y1,wEllips,lEllips,sudut+120);
        RotationEllips(x3,y1,wEllips-1,lEllips-1,sudut+120);
        RotationEllips(x3,y1,wEllips,lEllips,sudut+240);
        RotationEllips(x3,y1,wEllips-1,lEllips-1,sudut+240);

        //Animasi logo rotasi kiri
        RotationEllips(x3,y1,wEllips,lEllips,sudut2);
        RotationEllips(x3,y1,wEllips-1,lEllips-1,sudut2);
        RotationEllips(x3,y1,wEllips,lEllips,sudut2-120);
        RotationEllips(x3,y1,wEllips-1,lEllips-1,sudut2-120);
        RotationEllips(x3,y1,wEllips,lEllips,sudut2-240);
        RotationEllips(x3,y1,wEllips-1,lEllips-1,sudut2-240);

        //Lingkaran Kiri Ke Kanan
        setfillstyle(1,CYAN);
        lingkaran(x1,y1,rLing,CYAN);
        floodfill(x1,y1,CYAN);

        //Lingkaran Atas Kebawah
        setfillstyle(1,CYAN);
        lingkaran(x2,y2,rLing,CYAN);
        floodfill(x2,y2,CYAN);

        //Lingkaran Bawah Keatas
        setfillstyle(1,CYAN);
        lingkaran(x2,y3,rLing,CYAN);
        floodfill(x2,y3,CYAN);

        //Lingkaran Kanan Kekiri
        setfillstyle(1,CYAN);
        lingkaran(x3,y1,rLing,CYAN);
        floodfill(x3,y1,CYAN);

        sudut++;
        sudut2--;
        x1++;
        x3--;
        y2++;
        y3--;

        if(lEllips==80)
        {
            scl=2;
        }
        if(lEllips==40)
        {
            scl=1;
        }

        if(x1==550)
        {
            x1=50;
            x3=550;
            y2=50;
            y3=550;
            sudut=0;
            sudut2=360;
        }

        delay(20);

        //Atur tampilan agar tidak flicker
        setactivepage(page);
		setvisualpage(1-page);
		page = 1 - page;
		cleardevice();
    }
    closegraph();
}

void codeChallenge()
{
    int sudut=0;
    int sudut2=360;
    int rLing;
    int lEllips=40;
    int wEllips;
    int scl=1;
    int x1,y1,x2,y2,x3,y3;
    int page = 0;
    x1=300;y1=300;
    x2=100;y2=100;

    initwindow(x1+x1,y1+y1,"Code Challenge");

    while(!kbhit())
    {
        wEllips=lEllips/3;
        rLing=wEllips-5;

        if(scl==1)
        {
            lEllips++;
        }
        else
        {
            lEllips--;
        }

        lingkaran(x1,y1,20,CYAN);

        x3 = rotasiX(x1,y1,x2,y2,sudut);
        y3 = rotasiY(x1,y1,x2,y2,sudut);

        RotationEllips(x3,y3,wEllips,lEllips,sudut);
        RotationEllips(x3,y3,wEllips-1,lEllips-1,sudut);
        RotationEllips(x3,y3,wEllips,lEllips,sudut+120);
        RotationEllips(x3,y3,wEllips-1,lEllips-1,sudut+120);
        RotationEllips(x3,y3,wEllips,lEllips,sudut+240);
        RotationEllips(x3,y3,wEllips-1,lEllips-1,sudut+240);

        setfillstyle(1,CYAN);
        lingkaran(x3,y3,rLing,CYAN);
        floodfill(x3,y3,CYAN);

        sudut++;

        if(sudut==360)
        {
            sudut=0;
        }
        else
        {
            sudut++;
        }

        delay(20);

        if(lEllips==80)
        {
            scl=2;
        }
        if(lEllips==40)
        {
            scl=1;
        }

        //Atur tampilan agar tidak flicker
        setactivepage(page);
		setvisualpage(1-page);
		page = 1 - page;
		cleardevice();
    }
}

int main()
{
    int pilihan;
    while(pilihan != 3)
    {
        printf("\n\nMenu\n");
        printf("1. Animasi Sederhana\n");
        printf("2. Code Challenge\n");
        printf("3. Exit\n");
        reinput:
		printf("Masukkan Pilihan Menu Anda =");
        scanf("%d",&pilihan);
		printf("%d",&pilihan);
        switch(pilihan)
        {
            case 1: animasiSederhana();break;
            case 2: codeChallenge();break;
            case 3: exit(0);
            default :printf("Masukkan hanya angka yang ada di pilihan !\n");
			goto reinput;
        }
    }
}
