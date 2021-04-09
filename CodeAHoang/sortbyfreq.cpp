#include <bits/stdc++.h>

using namespace std;

typedef pair <int,int> ii;

bool compare(ii a,ii b)
{
    return (a.first>b.first);
}
void solve()
{
    vector <ii> bla;
    int n=0;
    cin >>n;
    for (int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        bool kt=false;
        for (int j=0;j<bla.size();j++)
            if (bla[j].second== a)
        {
            kt=true;
            bla[j].first++;
            break;
        }
        if (kt==false) bla.push_back(make_pair(1,a));
    }
    sort(bla.begin(),bla.end(),compare);
    for (int i=0;i<bla.size();i++)
    {
        for (int j=0;j<bla[i].first;j++) cout << bla[i].second << " ";
    }
    cout << endl;
}
int main()
{
    int t=0;
    cin>> t;
    while (t--)
    solve();
    return 0;
}
