#include <iostream>
#include <set>
using namespace std;
int a[100000];
int Repeat(int a[] , int n)
{
	int r=-1;
	set<int> repeatSet;
	for (int i=n-1; i>=0; i--)
	if (repeatSet.find(a[i])==repeatSet.end() )
		repeatSet.insert(a[i]);		
	else 
		r=a[i];
	return r;
}					
int main()
{
	int t,n;
	cin>>t;
	for (int i=1; i<=t; i++)
	{
		cin>>n;
	
		set<int> repeatSet;
		repeatSet.insert(-1);
		for (int j=0; j<n; j++)
		{
			cin>>a[j];	
		}
		int repeat =Repeat(a,n);
		if (repeat < 0)
			cout<<"NO\n";
		else 
			cout<<repeat<<"\n";
	}
   return 0;
}

