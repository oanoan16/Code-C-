#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
ll f2,f3,f4, l, r, x2, A, B, C, s;

ull pown(ull a, ull n)
{
	if (n==0)
		return 1;
	if (n==1)
		return a;
	if (n%2==0)
	{
		ull r=pown(a, n/2)%N;
		return (r*r)%N;
	}
	return (pown(a,n-1)*a)%N;		
}

ull cal(ull n)
{
	if (n==0) return 0;
	if (n==1) return (r-l+1);
	return (((pown(n,r+1)-pown(n,l)+N)%N)*(pown(n-1,N-2))%N)%N;
}

void solve()
{
	cin >> f2 >> f3 >> f4 >> l >> r;
	x2=cbrt(f3)+1;
	for (ll i=x2; i>=0; i--)
	{
	    ll t2, t3, t4, delta, x1, x3, tmp;
		t2=f2-i*i;
		t3=f3-i*i*i;
		t4=f4-i*i*i*i;
		if (t2<0 || t4<0) continue;
		delta=2*t4-t2*t2;
		tmp=sqrt(delta);
		if (tmp*tmp!=delta) continue;
		x1=(t2+tmp)/2;
		x3=(t2-tmp)/2;
		if (x3<0) continue;
		x1=sqrt(x1);
		x3=sqrt(x3);
		if ((x1*x1+x3*x3==t2) && (x1*x1*x1+x3*x3*x3==t3) &&
		(x1*x1*x1*x1+x3*x3*x3*x3==t4))
		{
			A=x1;
			B=i;
			C=x3;
			return;
		}
	}
}

int main()
{
	faster();
	int t;
    cin >> t;
    while(t--)
    {
    	solve();
    	s=(cal(A)+cal(B)+cal(C))%N;
		cout << s%N << endl;
	}
	return 0;
}

/* 
cbrt(); ham can bac 3
giai phuong trinh x^2-t2*x+p=0
p=(t2*t2-t4)/2;
delta=t2*t2-4*p;
cout << A << " "  << B <<  " " << C << endl;

5
14 36 98 5 6
49 251 1393 7 10
14 36 98 6 9
49 251 1393 8 8
8523609 22267438937 60797943806913 1001095084756 1004672827246


*/

