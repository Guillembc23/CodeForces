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

struct pars {
    int num, pos;
};

int comp (pars a, pars b) {
    return b.num > a.num;
}

void solve() {
  int n;
  cin >> n;
  vector<pars> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i].num;
    a[i].pos = i;
  }
  sort(a.begin(),a.end(),comp);
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