#include <bits/stdc++.h>
 
using namespace std;
 
string correctForm(string s)
{
    /*for (int i = 0;i<s.length();i++)
    {
        s[i] = tolower(s[i]);
    }*/
    for (string::iterator it = s.begin(); it!=s.end();it++)
        *it = tolower(*it);
    *s.begin() = toupper(*s.begin());
    return s;
}
void solve()
{
    stringstream ss;
    string s;
    getline(cin,s);
    ss << s;
    while (ss >> s)
    {
        cout << correctForm(s) + " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    string s;
    getline(cin,s);
    while (t--)
        solve();
    return 0;
}
