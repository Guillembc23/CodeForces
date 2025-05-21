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

#define pp pair<int, int>

void imprimir(pp a) {
  if (a.second == 0) {
    cout << a.first;
  } else {
    cout << "(" << a.first - a.second;
    while (a.second--) {
      cout << "+1";
    }
    cout << ")";
  }
}

void solve() {
  int n;
  cin >> n;

  vector<pp> a;

  int ones = 0;
  int twos = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 1)
      ones++;
    else if (x == 2) {
        twos++;
    }
    else {
      a.push_back({x, 0});
    }
  }

  while (ones > 0 and twos > 0) {
    a.push_back({3,1});
    ones--;
    twos--;
  }

  while (twos > 0) {
    a.push_back({2,0});
    twos--;
  }

  if (ones == 4 and a.empty()) {
    a.push_back({2,1});
    a.push_back({2,1});
    ones -= 4;
  }

  while (ones > 2) {
    a.push_back({3,2});
    ones -= 3;
  }
  if (ones == 2) {
    a.push_back({2,1});

  }else  if (ones == 1) {
    if (not a.empty()) {
    int min = 0;
    for (int i = 1; i < a.size(); i++) {
      if (a[min].first > a[i].first) min = i;
    }
    a[min].first++;
    a[min].second++;
    } else {
        a.push_back({1,0});
    }
  }

  for (int i = 0; i < a.size(); i++) {
    if (i > 0) cout << "*";
    imprimir(a[i]);
  }

  cout << endl;
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
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}