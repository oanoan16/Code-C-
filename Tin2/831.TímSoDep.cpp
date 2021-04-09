#include <stdio.h>
#include <math.h>

void swap(int*a, int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

bool prime(int x)
{
	if (x<2)
		return false ;
	for (int i=2; i<=sqrt(x); i++)
		if (x%i==0)
			return false;
	return true;
}

int kt(int n)
{
	int k=0;
	for (int i=2; i<=n; i++)
	{
		if(prime(i) && n%i==0)
		{
			if(n%(i*i)==0) k=1;
			else
			{
				k=0;
				break;
			}
		}
	}
	return k;
}

int main()
{
	
	int a, b, n;	
	scanf("%d%d", &a, &b);
	if (a>b) swap(&a, &b);
	for (int i=a; i<=b; i++)
		if (kt(i)==1) printf("%d ", i);
	return 0;
}


