#include <bits/stdc++.h>
// Bubble Sort
using namespace std;
int main()
{
	int n,t,j, a[5],c=0;
	cin>>n;
	for ( int i =0; i<n; i++)
		cin>>a[i];
    j=1;
    t=n-1;
	while (t>0)
	{
		int i=0, swapped=0;
		while (i<t)
		{
 			if (a[i]>a[i+1])
            {
				swap(a[i],a[i+1]);
                swapped=1;
            }
			i++;
		}
		if (swapped!=0)
        {
            cout<<"Buoc "<<j<<": ";
            for (int k=0; k<n; k++)
                cout<<a[k]<<" ";
            cout<<"\n";
        }
        else
            break;
        j++;
    }
   return 0;
}

