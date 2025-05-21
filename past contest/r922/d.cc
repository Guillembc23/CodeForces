#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 998244353;

bool pos (vi &a, int k) {
  int n = a.size();
    vi dp(n);
    for (int i = 0; i < n; i++)
    {
      dp
    }
}

int bin_search(vi &a, int i, int j) {
    int mid = (i+j)/2;
    if (i + 1 >= j) return j;
    else if (pos (a,mid)) return bin_search(a,i,mid);
    else return bin_search(a,mid,j);
}

void solve() {
  int n;
  cin >> n;
  vi a(n);
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }
  cout << bin_search(a,0,sum+1) << endl;
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