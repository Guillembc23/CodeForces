#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 998244353;

void solve() {
  int n, k, m;
  string s;
  cin >> n >> k >> m >> s;

  string counter;

  vb letter(k, false);
  int d = 0;

  for (int i = 0; i < m; i++) {
    if (not letter[int(s[i]) - int('a')] and int(s[i]) - int('a') < k) {
      letter[int(s[i]) - int('a')] = true;
      d++;
    }
    if (d == k) {
    counter += s[i];
    letter = vb(k,false);
    d = 0;
    }
  }

  for (int i = 0; i < k; i++)
  {
    if (not letter[i]) {
      counter += char(i+int('a'));
      break;
    }
  }

  while (counter.size() < n) {
    counter += 'a';
  }

  if (counter.size() == n) {
    cout << "NO" << endl;
    cout << counter << endl;
  }
  else cout << "YES" << endl;
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