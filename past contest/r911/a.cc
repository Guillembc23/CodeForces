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
  char k;
  int maxi = 0;
  int curr = 0;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> k;
    if (k == '#') {
        curr = 0;
    } else {
        count++;
        curr++;
        maxi = max(maxi, curr);
    }
  }

  if(maxi > 2) {
    cout << 2 << endl;
  } else {
    cout << count << endl;
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