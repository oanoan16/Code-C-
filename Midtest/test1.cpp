#include <stdio.h>

int main(){
	int k,s,t,a,z;
	2<=k<=2500;
	t=0;
	scanf("%d%d",&k,&s);
	for (int x=0;x<=k;x++){
		for(int y=0;y<=k;y++){
			a=s-(x+y);
		if (a>=0 && a<=k)
		   t+=1;
			}
		}
	

    printf ("%d",t);

	
	return 0;
}


