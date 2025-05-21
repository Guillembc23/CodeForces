#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;

void solve() {
    int a,b;
    cin >> a >> b;
    if ( (a+b)%3 == 0 and 2*a >= b and 2*b >= a) cout << "YES" << endl;
    else cout << "NO" << endl;
}

signed main () {
    int tt;
    cin >> tt;
    while(tt--) {
        solve();
    }
}