#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define si set<int>
#define pb push_back
const int MOD = 998244353;

/*
for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
    }
  }
*/

int gcd(int a, int b) {
  if (a == 0)
    return b;
  else if (b == 0)
    return a;
  else if (a > b)
    return gcd(a % b, b);
  else
    return gcd(a, b % a);
}

bool coprime(int a, int b) { return gcd(a, b) == 1; }

void solve() {
  int n;
  cin >> n;
  vi a(n);
  vi tree(n);
  vi deg(n,1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  tree[0] = -1;
  deg[0] = 0;
  for (int i = 1; i < n; i++) {
    tree[i] = i - 1;
    int j = i - 1;
    int k = tree[j];
    while (k > 0) {
      if (not coprime(a[k], a[i])) {
        swap(tree[k], tree[j]);
        deg[k]
        k = tree[j];
      } else {
        k = tree[k];
        j = tree[j];
      }
    }
  }
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}