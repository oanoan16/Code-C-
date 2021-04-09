#include <stdio.h>

int main(){
	int a,b;
	scanf ("%d%d",&a,&b);
	if (a==0 || b==0)
		printf ("Zero");
	else if (a<0 && b<0 && (a-b)%2==0)
		printf ("Positive");
	else if (a>0 && b>0)
	    printf ("Positive");
	else if (a<0 && b<0 && (a-b)%2!=0)
		printf ("Negative");
	else if (a<0 && b>0)
		printf ("Zero");
	else 
		printf ("Zero");
	
	return 0;
}


