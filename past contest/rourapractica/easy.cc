#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

bool pow(int a) {
    if ( a % 2 == 1) return false;
    if (a == 2) return true;
    else return pow(a/2);
}

//impars -> guanys
//pars?
void solve() {
  int n;
  while (cin >> n) {
  if (pow(n)) cout << "Tourist" << endl;
  else cout << "Petr" << endl;
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