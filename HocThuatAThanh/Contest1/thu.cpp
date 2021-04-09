#include<iostream>
#include<vector>
#include <stdio.h>
#include<string>
using namespace std;

int main(){
	int t;
	string name;
	cin>>t;
	fflush(stdin);
	while(t--){
		getline(cin,name);
		string nameTrim;
		for (int i=0;i<name.length();i++){
			if(name[i]!=' ') {
				if(name[i]>='A' && name[i] <='Z') nameTrim+=(name[i]+32);
				else nameTrim+=name[i];
			}
			else if(name[i]==' '&& name[i-1]!=' ' && i>=1) nameTrim+=' ';
		}
		if(nameTrim[0]>='a'&& nameTrim[0]<='z') nameTrim[0]-=32;
		for (int i=0;i<nameTrim.length();i++){
			if(nameTrim[i]==' ' && nameTrim[i+1]!=' ' && nameTrim[i+1]>='a'&& nameTrim[i+1]<='z') nameTrim[i+1] -= 32;
		}
		cout<<nameTrim<<endl;
	}
return 0;
}
