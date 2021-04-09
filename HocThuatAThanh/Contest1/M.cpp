#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s[500];
	int t,n;
	cin>>t;
	for (int i=1; i<=t; i++)
	{
		cin>>s;
		n=strlen(s);
		int k=0, c=0;
		while (  k<n-1)
		{
			if (s[k]==s[k+1])
				k++;
			else
			{
				if (s[k]<s[k+1])
				{
					int j=k+1;
					while (j<n-1)
					{
						if (s[j]>s[j+1])
						{
							c=1;
							break;
						}	
						else
							j++;
					}
					break;
				}
				else
				{
					if (s[k]>s[k+1])
					{
						int j=k+1;
						while (j<n-1)
						{
							if (s[j]<s[j+1])
							{
								c=1;
								break;
							}
							else
								j++;
						}
						break;
					}
				}
			}
		}
		if (c==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
   return 0;
}

