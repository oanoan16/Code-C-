#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long long s=0, a[5];
	for ( int i=1; i<=5; i++)
	{
		cin >> a[i];
		s=s+a[i];
	}
	cout << s;
	return 0;
}

