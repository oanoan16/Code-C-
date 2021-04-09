#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void printf(string s)
{
	string bir="0";
	bir+=s;
	string gray="";
	for (int i=0; i<s.size(); i++)
		if (s[i]==bir[i])
			gray+='0';
		else
			gray+='1';
	cout << gray << " ";
}
void Try(int i, string s)
{
	if (s.size()==i)
		printf(s);
	else 
	{
		Try(i,s+'0');
		Try(i,s+'1');
	}		
}
int main()
{
	faster();
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;		
		Try(n,"");
		cout << endl;
	}
	return 0;
}


//	num=(num>>1)^num;

/*
char xor_c(char a, char b) { return (a == b) ? '0' : '1'; }
string binarytoGray(string binary) 
{ 
    string gray = ""; 
  
    // MSB of gray code is same as binary code 
    gray += binary[0]; 
  
    // Compute remaining bits, next bit is comuted by 
    // doing XOR of previous and current in Binary 
    for (int i = 1; i < binary.length(); i++) { 
        // Concatenate XOR of previous bit 
        // with current bit 
        gray += xor_c(binary[i - 1], binary[i]); 
    } 
  
    return gray; 
} 
*/
