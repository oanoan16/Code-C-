#define M 1000000007

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

vi v(100);
int n, lsum, rsum;

void init() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    lsum = rsum = 0;
}

bool div() {
    sort(v.begin(), v.end(), greater<int>());
    int i = 0, j = n - 1;

    while (i <= j) {
        if (lsum < rsum) {
            lsum += v[i];
            ++i;
        } else {
            rsum += v[j];
            --j;
        }
    }

    if (lsum == rsum) return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        init();
        if (div())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
