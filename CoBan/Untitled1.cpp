#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
char sMin[100]; 
int pointMin=1e9, cMax=0;
int main()
{
	int n, p1,t1,p2,t2,p3,t3,p4,t4,point,c, a[5],b[5];
	char s[100];
	cin >> n;
	for (int i=1; i<=n ; i++)
	{
		point=0;
		c=0;
		cin>> s;
		for (int i=1; i<=4; i++)
		{
			cin >> a[i] >> b[i];
		}
		for ( int i=1; i<=4; i++)
		{
			if (b[i] !=0)
			{
				c++;
				point= point + b[i]+(a[i]-1)*20;
			}
			if (c>cMax || (c==cMax && point<pointMin))
			{
				cMax=c;
				pointMin=point;
				strcpy(sMin,s);
			}
		}
	}		
	cout << sMin << " " <<cMax <<" "<<pointMin;
	return 0;
}

