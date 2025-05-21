#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

vi seg (vi &a) {
    int n = a.size();
    vi res(2*n);
    for (int i = 0; i < n; i++)
    {
        res[i+n] = a[i];
    }
    for (int i = n-1; i > 0; i--)
    {
        res[i] = res[2*i] + res[2*i+1];
    }
    return res;
}

int calc(int a, int b, vi &t) {
    cout << a << " " << b << endl;
    int s = 0;
    if (a == b) {
        return t[a];
    }
    if (a+1 == b) {
        return t[a] + t[b];
    }

    if (a % 2 == 1) {
        s += t[a];
        a++;
    }
    if (b % 2 == 0) {
        s += t[b];
        b--;
    }
    return calc(a/2,b/2,t) + s;
}

void solve () {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vi t = seg(a);
    for (int i = 1; i < 2*n; i++)
    {
        cout << t[i] << endl;
    }
    
    int x, y;
    while (cin >> x >> y) {
        cout << calc(x+n,y+n,t) << endl;
    }
}

signed main () {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
    }
}