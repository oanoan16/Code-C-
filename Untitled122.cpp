#include<stdio.h>
int main (){
	int n,a;
	scanf("%d",&n);
	while(n!=0)
	{
		printf("%d",n%2);
		n=n/2;
	}
 }
