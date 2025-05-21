#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

const int MOD = 1e9+7;

int fexp(int a, int b) {
    if (b == 0) return 1;
    int ans = fexp(a,b/2);
    ans = ans*ans;
    ans %= MOD;
    if (b % 2 == 1) ans *= a;
    ans %= MOD;
    return ans;
}

void solve() {
    int t;
    cin >> t;
    vi n(t);
    vi k(t);
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < t; i++)
    {
        cin >> k[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (k[i] == n[i]) cout << 1 << endl;
        else cout << fexp(2,k[i]) << endl;
    }
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    solve();
  }
}