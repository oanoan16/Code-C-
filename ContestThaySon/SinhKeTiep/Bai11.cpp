#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool check;
string printf(string s)
{
	string bir="0";
	bir+=s;
	string gray="";
	for (int i=0; i<s.size(); i++)
		if (s[i]==bir[i])
			gray+='0';
		else
			gray+='1';
	return gray;
}
void Try(int i, string s, string str)
{
	if (check)
		return;
	if (s.size()==i)
	{
		if (str.compare(printf(s))==0)
		{
			check=1;
			cout << s;
		}
	}
	else 
	{
		Try(i,s+'0',str);
		Try(i,s+'1',str);
	}		
}
int main()
{
	faster();
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		check=0;
		int n=str.size();	
		Try(n,"",str);
		cout << endl;
	}
	return 0;
}

/*
char flip(char c) { return (c == '0') ? '1' : '0'; } 
string graytoBinary(string gray) 
{ 
    string binary = ""; 
  
    // MSB of binary code is same as gray code 
    binary += gray[0]; 
  
    // Compute remaining bits 
    for (int i = 1; i < gray.length(); i++) { 
        // If current bit is 0, concatenate 
        // previous bit 
        if (gray[i] == '0') 
            binary += binary[i - 1]; 
  
        // Else, concatenate invert of 
        // previous bit 
        else
            binary += flip(binary[i - 1]); 
    } 
  
    return binary; 
} 
*/

