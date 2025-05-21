#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>

typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
  int n;
  cin >> n;
  vi a(n);
 
  cin >> a[0];
   int maxi = a[0];
  for (int i = 1; i < n; i++) {
    cin >> a[i];
    maxi = max(maxi, a[i]);
  }

  for (int i = 1; i < maxi; i++)
  {
    /* code */
  }
  

}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}