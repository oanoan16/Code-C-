#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct point {
    double x, y;
};

bool cmp_x(const point &a, const point &b) {
    return a.x < b.x;
}

bool cmp_y(const point &a, const point &b) {
    return a.y < b.y;
}

#define MAXN 100000
point a[MAXN];
double mindist; // bi?n luu k?t qu? bài toán

// tính kho?ng cách gi?a a và b r?i update k?t qu?
void upd_ans(const point &a, const point &b) {
    double dist = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    if (dist < mindist) mindist = dist;
}

void find(int l, int r) {
    if (r <= l) return;
    // do?n [l,r] có 2 ph?n t?
    if (r == l + 1) {
        upd_ans(a[l], a[r]);
        // s?p các ph?n t? l?i theo y
        if (!cmp_y(a[l], a[r])) swap(a[l], a[r]);
        return;
    }

    int m = (l + r) / 2;
    int midx = a[m].x;
    find(l, m);
    find(m+1, r);

    static point t[MAXN];
    // tr?n a[l,m] và a[m+1,r] l?i, luu vào m?ng t?m t
    merge(a+l, a+m+1, a+m+1, a+r+1, t, cmp_y);
    // copy t? t v? l?i a
    copy(t, t+r-l+1, a+l);

    // m?ng t ? dây luu các ph?n t? th?a |x_i - midx| < mindist,
    // v?i s? lu?ng ph?n t? là tm
    // do dã sort nên các ph?n t? s? có y tang d?n
    int tm = 0;
    for (int i=l; i<=r; i++) if (abs(a[i].x-midx) < mindist) {
        for (int j=tm-1; j>=0 && t[j].y > a[i].y-mindist; j--)
            upd_ans(a[i], t[j]);
        t[tm++] = a[i];
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int n; cin >> n;
    for (int i=0; i<n; i++) 
		cin >> a[i].x >> a[i].y;

    mindist = 1E20;
    sort(a, a+n, cmp_x);
    find(0, n-1);

    printf("%.3lf", mindist);
    return 0;
}
