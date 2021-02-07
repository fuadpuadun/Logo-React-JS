/*  Nama    : Fuad Sheri Firdaus
    NIM     : 181511044
*/

#ifndef SHAPE_H
#define SHAPE_H

#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<graphics.h>
typedef struct {
	int x;
	int y;
} Point;

void persegi(int x1, int y1, int panjang, int lebar);

void jajarGejang(int x1, int y1, int tinggi, int panjang);

void belahKetupat(int x1, int y1, int d1, int d2);

void trapesium(int x1, int y1, int tinggi, int p1, int p2);

void segitigaKiri(int x1, int y1, int tinggi);

void segitigaKanan(int x1, int y1, int tinggi);

void segitiga(int x1, int y1, int tinggi);

void lingkaran(int x1, int y1, int radius, int warna);

void CreateEllips(int x0, int y0, int rx, int ry);

void Plot(int x0, int y0, int x, int y);

int rotasiX(int x1, int y1, int x2, int y2, int deg);

int rotasiY(int x1, int y1, int x2, int y2, int deg);

void PlotRotation(int x0, int y0, int x, int y, int deg);

void RotationEllips(int x0, int y0, int rx, int ry, int deg);

#endif
