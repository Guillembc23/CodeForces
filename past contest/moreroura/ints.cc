#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 0;
  cin >> tt;

  while (tt--) {
    string x, y;
    cin >> x >> y;
    if (x.size() != y.size()) {
      if (x.size() > y.size())
        cout << "MMM BRAINS" << endl;
      else
        cout << "NO BRAINS" << endl;
    } else {
      if (x >= y)
        cout << "MMM BRAINS" << endl;
      else
        cout << "NO BRAINS" << endl;
    }
  }
}