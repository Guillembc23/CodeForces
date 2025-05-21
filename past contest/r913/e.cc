#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define si set<int>
#define pb push_back
const int MOD = 998244353;

/*
for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < XX; j++)
    {
    }
  }
*/
int num (int n) {
    return (n+2)*(n+1)/2 ;
}

int result (int n) {
    if (n < 10) return num(n);
    else return result(n/10)*num(n%10);
}

void solve() {
    int x;
    cin >> x;
    cout << result (x) << endl;
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