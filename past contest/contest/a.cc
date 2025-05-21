#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

void solve () {
    int n, k;
    cin >> n >> k;
    int a = n;
    int diag = 0;
    while (k > 0) {
        k -= a;
        diag++;
        if (k > 0 and a < n) {
            k -= a;
            diag++;
        }
        a--;
    }
    cout << diag << endl;
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