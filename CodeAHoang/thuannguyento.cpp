#include <bits/stdc++.h>
 
using namespace std;
vector<bool> v;
void init()
{
    v.resize(100000);
    v[0] = 1;
    v[1] = 1;
    int i = 2;
    while (i<v.size())
    {
        if (!v[i])
        {
            for (int j=i*2;j<v.size();j+=i)
                v[j]=1;
        }
        i++;
    }
}
int tcs(int n)
{
    int res= 0;
    while (n)
    {
        res += n%10;
        n/=10;
    }
    return res;
}
bool checkDigit(int n)
{
    if (n==2) return true;
    if (!(n&1))
        return false;
    while (n)
    {
        if (v[n%10])
            return false;
        n/=10;
    }
    return true;
}
int main()
{
    init();
    int a,b;
    cin >> a >> b;
    if (a>b)
        swap(a,b);
    int count =0;
    for (int i = a; i<=b;i++)
    {
        if ((!v[i]) && checkDigit(i) && (!v[tcs(i)]))
        {
            count++;
            //cout << i << endl;
        }
    }
    cout << count << endl;
    return 0;
}
