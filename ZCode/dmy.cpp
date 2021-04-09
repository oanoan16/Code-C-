#include <stdio.h>
int day(int m, int y){
	int dd;
	switch (m){ 
		case 4: case 6: case 9: case 11:{
			dd=30;
			break;
		}
		case 2: {
			if (((y%4==0) && (y%100!=0)) || (y%400==0)) dd=29;
			else dd=28;
			break;
		}
		default:
			dd=31;
	}
	return dd;
}
int main(){
	int d,m,y,d1,m1,y1,d2,m2,y2,dd;
	scanf("Input your message: ");
	scanf("%d%d%d",&d,&m,&y);
	dd= day(m,y);
	if ( (d<dd) && (d>1) ) {
	   d1=d-1;	m1=m;	y1=y;
	   d2=d+1;	m2=m; 	y2=y;	
	}
	else {
		if (d==dd){
			if (m==12){
				d1=d-1;	m1=m;	y1=y;
				d2=1;	m2=1;	y2=y+1;
			}
			else {
				d1=d-1;	m1=m;	y1=y;
				d2=1;	m2=m+1;	y2=y;	
			}
		}
		else { 
			if (d==1){
				if (m==1){
					d1=31;	m1=12;	y1=y-1;
					d2=d+1;	m2=m;	y2=y;
				}
				else {
					d1=day(m-1,y);	m1=m-1;	y1=y;
					d2=d+1;	m2=m;	y2=y;
				}
			}
		}
	}
	printf("This is encrypted message: ");
	printf("%d%d%d",d1,m1,y1);
	printf("%d%d%d",d2,m2,y2);
}