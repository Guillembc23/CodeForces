#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

int negmod (int a, int s) {
    return (a+(-s)%a)%a;
}

void solve() {
    int n, k;
    cin >> n >> k;
    int s = 0;
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s += x;
        ma = max(ma,x);
    }
    int b = n;
    while (not (0 <= negmod(b,s) and negmod(b,s) <= k and (s+k)/b >= ma)) {
        //cout << negmod(b,s) << " " << (s+negmod(b,s))/b << endl;
        //cout << b << endl;
        b--;
    }
    cout << b << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}