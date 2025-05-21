#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;

#define endl "\n"

const int MOD = 998244353;
//
//
//
 
void solve() {
  int n;
  cin >> n;
 
  vector<int> tree(n + 1, 0);
 
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    tree[i + 1] = tree[i] ^ x;
  }
 
  int result = 0;
 
  for (int i = 1; i <= n; i++) {
    for (ll j = i; j <= n; j++) {
      result = (result + ((j - i + 1) * (tree[j] ^ tree[i - 1])) )% MOD;
    }
  }
 
  cout << result << endl;
}
//
//
//
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  // cin >> tt;
 
  for (int t = 0; t < tt; t++) {
    solve();
  }
}
