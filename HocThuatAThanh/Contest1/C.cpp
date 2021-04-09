#include <iostream>
#include <math.h>
using namespace std;
bool Prime( int x)
{
	if (x<2 ) 
		return false ;
	else
	{
		for (int i=2; i<= round(sqrt(x)); i++)
			if (x%i==0)
			{
				return false;
				break;
			}
	}
	return true;
}
bool NumberPrime (int y)
{
	int z;
	while (y!=0) 
	{
		z=y%10;
		if (Prime(z))
		{
			y=y/10;
		}
		else 
		{
			return false ;
			break;
		}
	}
	return true;
}
int SumDiv (int t)
{
	int s=0;
	while ( t!=0)
	{
		s+=(t%10);
		t/=10;
	}
	return s;
}
int main()
{
	int n, a,b;
	cin >> n;
	for (int i=1; i<=n; i++)
	{
		int count=0;
		cin >> a>> b;
		for (int k=a; k<=b; k++)
		if ( NumberPrime(k) && Prime(SumDiv(k)) && Prime(k))
			count++;
		cout<< count<<"\n";
	}
   return 0;
}

