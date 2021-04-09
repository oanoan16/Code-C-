#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,c=1;
	cin >> n;
	if ( n < 2 ) c=0;
	for (int i=2 ; i<= round(sqrt(n)) ; i++ )
	{
		if (n%i==0) 
		{
			c=0;
			break;
		}
	}
	if (c==1) cout << "Yes";
	else cout << "No";
	return 0;
}

