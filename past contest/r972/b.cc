#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

int binsearch(int a, int i, int j, vi &b) {
    if (i + 1 >= j) {
        return i;
    } else {
        int m = (i+j)/2;
        if (b[m] > a) return binsearch(a,i,m,b);
        else return binsearch(a,m,j,b);
    }
}

void solve () {
    int n, m, q;
    cin >> n >> m >> q;
    vi b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(),b.end());

    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        if (a < b[0]) {
            cout << b[0]-1 << endl;
        } else if (a > b[m-1]) {
            cout << n - b[m-1] << endl;
        } else {
            int j = binsearch(a,0,m,b);
            if (b[j] == a) {
                cout << 0 << endl;
            } else {
                cout << (b[j+1] - b[j])/2 << endl;
            }
        }
    }
    
}

signed main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}