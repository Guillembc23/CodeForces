#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 1e9 + 7;

int choose2 (int a) {
    return a*(a-1)/2;
}

int exp (int a, int n) {
    if (n == 0) return 1;
    else if (n == 1) return a;
    else return exp(a,n/2)*exp(a,n - n/2)%MOD;
}

int inv (int a) {
    return exp(a,MOD - 1);
}

void solve() {
  int n, m , k;
  cin >> n >> m >> k;
  int sum = 0;
  for (int i = 0; i < m; i++)
  {
    int x, y, z;
    cin >> x >> y>> z;
    sum += z;
    sum %= MOD;
  }

  cout << (sum + k*)%MOD <<endl;
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