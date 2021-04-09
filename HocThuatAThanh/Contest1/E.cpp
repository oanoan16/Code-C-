#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,SumU=0, SumD=0, MinU=1e9, MinD=1e9, up,down;
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		cin>>up>>down;
		SumU+=up;
		SumD+=down;
		if ( MinU >up ) 
			MinU=up;
		if (MinD> down)
			MinD= down; 
	}
	SumU+=MinD;
	SumD+=MinU;
	if (SumU>SumD) 
		cout<< SumU;
	else
		cout<< SumD;
   return 0;
}

