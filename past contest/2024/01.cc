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

void nearest(const vi &a, vi &b) {
  int n = a.size();
  b = vi(n);
  stack<pair<int, int>> s;
  pair<int, int> dumy;
  for (int i = 0; i < n; i++) {
    dumy.first = a[i];
    dumy.second = i;
    while (not s.empty() and s.top().first > a[i]) {
      s.pop();
    }
    if (s.empty())
      b[i] = -1;
    else
      b[i] = s.top().second;
    s.push(dumy);
  }
}

void nearestinv(const vi &a, vi &b) {
  int n = a.size();
  b = vi(n);
  stack<pair<int, int>> s;
  pair<int, int> dumy;
  for (int i = n - 1; i >= 0; i--) {
    dumy.first = a[i];
    dumy.second = i;
    while (not s.empty() and s.top().first > a[i]) {
      s.pop();
    }
    if (s.empty())
      b[i] = -1;
    else
      b[i] = s.top().second;
    s.push(dumy);
  }
}

bool comp(int a, int b) { return a == b or a == b + 1; }

void dfs(int v, int &tot, vvi &aa, vb &visited) {
  visited[v] = true;
  tot++;
  for (auto i : aa[v]) {
    if (not visited[i]) dfs(i, tot, aa, visited);
  }
}

void solve() {
  int n;
  cin >> n;
  vi a(n), b(n), c(n);
  int count = 0;
  int pos;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 0) {
      count++;
      pos = i;
    }
  }

  if (count == 1) {
    nearest(a, b);
    nearestinv(a, c);

    vvi aa(n);

    for (int i = 0; i < n; i++) {
      if (b[i] != -1 and comp(a[i], a[b[i]])) aa[b[i]].pb(i);
      if (c[i] != -1 and comp(a[i], a[c[i]])) aa[c[i]].pb(i);
    }

    vb visited(n, false);

    int tot = 0;
    dfs(pos, tot, aa, visited);

    if (tot == n)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  else
    cout << "NO" << endl;
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