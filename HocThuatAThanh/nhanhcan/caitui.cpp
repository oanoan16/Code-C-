#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int n, m, w[1000], v[1000], x[1000], gt, vmax=0;
float g=0.0; // caanj

void init(){
	cin >> n >> m;
	for (int i=1; i<=n; i++)
		cin >> w[i] >> v[i];
	for (int i=1; i<n; i++){
		for (int j=i+1; j<=n; j++){
			float t1=v[i]/w[i], t2=v[j]/w[j];
			if (t1<t2){
				swap(v[i],v[j]);
				swap(w[i],w[j]);
			}
		}
	}
}

void nhanhCan(int k){
	for (int i=1; i>=0; i--){
		x[k]=i;
		gt+=v[k]*x[k];
		m-=w[k]*x[k];
		float gk=0.0;
		if (k!=n)	
			gk=(float) m*v[k+1]/w[k+1] + gt;
		else 
			gk=(float)gt;
		if (k==n){
			if (m>=0 && gk>g){
				g=gk;
				vmax=gt;
			}
		}
		else if (gk>g) nhanhCan(k+1);
		gt-=v[k]*x[k];
		m+=w[k]*x[k];
	}
}

int main()
{
	faster();
	init();
	nhanhCan(1);
	cout << vmax;	
	return 0;
}


