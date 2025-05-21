#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s += '1';
    int curr = 0;
    int sol = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0') {
            curr++;
        } else {
            curr = 0;
        }
        if (curr >= m) {
            sol++;
            for (int j = i; j < min(n,i+k); j++)
            {
                s[j] = '1';
            }
            curr = 0;
        }
    }
    cout << sol << endl;
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