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

int main()
{
	int n,a[100][100],s;
	int count=0
	cin >> a>> b;
	for (int k=a; k<=b; k++)
	if (  Prime(SumDiv(k)) && NumberPrime(k) && Prime(k))
		count++;
	cout<<count<<"\n";
   return 0;
}

