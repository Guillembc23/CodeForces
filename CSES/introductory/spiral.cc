#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;

void solve () {
    int x, y;
    cin >> x >> y;
    if (x > y) {
        if (x%2 == 1) {
            cout << (x-1)*(x-1) + y;
        } else {
            cout << x*x - y + 1;
        }
    } else if (y >= x) {
        if (y%2 == 0) {
            cout << (y-1)*(y-1) + x;
        } else {
            cout << y*y - x + 1;
        }
    }
    cout << endl;
}

signed main () {
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
}