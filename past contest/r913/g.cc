#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define si set<int>
#define pb push_back
const int MOD = 998244353;
//
//
//
void change(char &a) {
  if (a == '0')
    a = '1';
  else
    a = '0';
}

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vi a(n);
  vi indeg(n, 0);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[i] = x - 1;
    indeg[x - 1]++;
  }

  string sol;

  queue<int> q;
  for (int i = 0; i < n; i++) {
    if (indeg[i] == 0) q.push(i);
  }

  int count = 0;
  while (not q.empty()) {
    int x = q.front();
    q.pop();
    if (s[x] == '1') {
      change(s[a[x]]);
      count++;
      sol += to_string(x + 1);
      sol += " ";
    }
    indeg[a[x]]--;
    if (indeg[a[x]] == 0) q.push(a[x]);
  }

  queue<int> p;
  for (int i = 0; i < n; i++) {
    if (indeg[i] == 1) p.push(i);
  }
  vb visited(n, false);

  bool parity = true;

  while (not p.empty()) {
    string s1, s2;
    int x = p.front();
    if (not visited[x]) {
      visited[x] = true;
      int y = x;
      int lenght = 1;
      int sw = 0;
      while (a[y] != x) {
        lenght++;
        if (s[y] == '1') {
          sw++;
          change(s[y]);
          change(s[a[y]]);
          s1 += to_string(y + 1);
          s1 += " ";
        } else {
          s2 += to_string(y + 1);
          s2 += " ";
        }
        y = a[y];
        visited[y] = true;
      }
      if (s[y] == '1') {
        change(s[y]);
        change(s[a[y]]);
        sw++;
        s1 += to_string(y + 1);
        s1 += " ";
      } else {
        s2 += to_string(y + 1);
        s2 += " ";
      }
      parity = parity and s[x] == '0';
      count += min(sw, lenght - sw);
      if (sw < lenght - sw)
        sol += s1;
      else
        sol += s2;
    }
    p.pop();
  }

  if (not sol.empty()) sol.pop_back();
  if (parity) {
    cout << count << endl;
    cout << sol << endl;
  } else
    cout << -1 << endl;
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  // ios_base::sync_with_stdio(0);
  // cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}