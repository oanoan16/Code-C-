#include <stdio.h>
#include <math.h>

bool prime(int x)
{
	if (x<2)
		return false ;
	for (int i=2; i<=sqrt(x); i++)
		if (x%i==0)
			return false;
	return true;
}

int sumDiv(int x)
{
	int s=0,y;
	while (x>0)
	{
		y=x%10;
		s+=y;
		x/=10;
	}
	return s;
}
int main()
{
	int n,c;
	scanf("%d", &n);
	if (n<6)
		printf("%d", 0);
	else
	{
		for (int i=2; i<n; i++)
			if (prime(i) && sumDiv(i)%5==0)
			{
				c++;
				printf("%d ", i);
			}
		printf("\n%d", c);
	}
	return 0;
}


