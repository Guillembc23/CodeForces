#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

bool ask(string s) {
  cout << "? " << s << endl;
  //cout.flush();
  int res;
  cin >> res;
  return res;
}
void solve() {
  int n;
  cin >> n;
  string s;

  bool forward = true;
  while (s.size() < n) {
    if (forward) {
        if (ask(s+'0')) {
            s += '0';
        } else if (ask(s+'1')) {
            s += '1';
        } else {
            forward = false;
        }
    } else {
        if (ask('0'+s)) {
            s = '0' + s;
        } else {
            s = '1' + s;
        }
    }
  }

  cout << "! " << s << endl;
}

signed main() {
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}