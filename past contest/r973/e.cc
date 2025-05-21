#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    else if (a > b) return gcd(a%b,b);
    else return gcd(a,b%a);
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    int mi = 1e10;
    int curr = 0;
    bool rep = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        
        if (not rep) {
            mi = 1e5;
        for (int j = 0; j < n; j++)
        {
            mi = min(gcd(curr,a[j]),mi);
        }
        if (curr == mi) rep = true;
        curr = mi;
        } 
        s += curr;
    }
    cout << s << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}