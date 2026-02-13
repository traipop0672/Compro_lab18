#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1,Rect *r2){

	double overleft = max(r1->x, r2->x);
	double overright = min(r1->x + r1->w, r2->x + r2->w);
	double overtop = min(r1->y, r2->y);
	double overbottom = max(r1->y - r1->h, r2->y - r2->h);

	double width= overright - overleft;
	double height = overtop - overbottom;

	if(width > 0 && height > 0){
		return width*height;
	} else {
		return 0;
	}
}

