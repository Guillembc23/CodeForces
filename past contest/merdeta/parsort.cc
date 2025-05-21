#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
  int n;
  cin >> n;

  vector<int> a(n), b(n);
  bool cond = true;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }

  sort(a.begin(), a.end());

  for (int i = 0; i < n; i++) {
    if(b[i]%2 != a[i]%2){
        cond = false;
        break;
    }
  }


  if(cond){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
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