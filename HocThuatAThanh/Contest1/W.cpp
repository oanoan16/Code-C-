#include <bits/stdc++.h>
using namespace std;
char s1[1000], s2[1000];
int a[1000],c=0;
void Insert (char s1[], char s2[] )
{
	int n=strlen(s1);
	int m=strlen(s2);
	int maxLen=n-1;
	if (maxLen<m-1)	
		maxLen=m-1;
	for (int i=maxLen; i>=0 ; i--)
	{
		if ( i>= (maxLen-n+1 ))
			s1[i]=s1[i-(maxLen-n+1)];
		else
			s1[i]=48;
		if (i>= (maxLen-m+1))
			s2[i]=s2[i-(maxLen-m+1)];
		else 
			s2[i]=48;
	}
	for (int i=0; i<=maxLen; i++)
	{
		if (s1[i]<s2[i])
			for (int j=i; j<=maxLen; j++)
			{
				swap(s1[j],s2[j]);
				break;
			}
		else 
		{
			if (s1[i]>s2[i])
				break;
			else 
			{
				if (s1[i]==s2[i])
					c++;
			}
		}
	}	
}
void Calculator ( char s1[],char s2[])
{
	int r=0;
	for (int i=strlen(s1)-1; i>=0; i--)
	{
		if (s1[i]-r-s2[i]<0)
		{
			a[i]=10+s1[i]-r-s2[i];
			r=1;	
		}
		else 
		{
			a[i]=s1[i]-s2[i]-r;
			r=0;
		}
	}
}
int main()
{
	int t; 
	cin>>t;
	for (int n=1; n<=t; n++)
	{
		cin>>s1>>s2;
		Insert (s1,s2);
		Calculator(s1,s2);
		if (c==strlen(s1))
			cout<<0;
		else
		{
			for (int i=0; i<=strlen(s1)-1; i++)
				if (a[i]!=0)
				{
					for (int j=i; j<=strlen(s1)-1; j++)
						cout<<a[j];
					break;
				}
		}
		cout<<"\n";
	}	
   return 0;
}

