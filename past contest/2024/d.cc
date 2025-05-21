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

struct per {
  int pos, w;
};

void connected(int v, vi &a, vi &b, vi &c, vb &visited) {
  visited[v] = true;
  if (b[v] != -1) {
    if (not visited[b[v]]) connected(b[v], a, b, c, visited);
  }
  if (c[v] != -1) {
    if (not visited[c[v]]) connected(c[v], a, b, c, visited);
  }
}

void solve() {
  int n;
  cin >> n;
  vi a(n);
  int pes = 0;
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 0) {
      pes = i;
      count++;
    }
  }
  bool sol = true;
if(count == 1) {
    vi b(n, -1), c(n, -1);
    vector<per> stk1(n), stk2(n);
    int j = 1, k = 1;
    per dumy;
    dumy.w = -1;
    dumy.pos = -1;
    stk1[0] = dumy;
    stk2[0] = dumy;
    for (int i = 0; i < n; i++) {
      while (j > 0 && stk1[j].w > a[i]) {
        j--;
      }
      b[stk1[j].pos] = i;
      dumy.pos = i;
      dumy.w = a[i];
      stk1[j] = dumy;
      j++;
    }
    for (int i = n - 1; i >= 0; i--) {
      while (k > 0 && stk2[k].w > a[i]) {
        k--;
      }
      c[stk2[k].pos] = i;
      dumy.pos = i;
      dumy.w = a[i];
      stk2[k] = dumy;
      k++;
    }

    vb visited(n, false);
    connected(pes, a, b, c, visited);
    for (int i = 0; i < n; i++) {
      if (not visited[i]) sol = false;
    }
    
    if (sol) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
}else 
  cout << "NO" << endl;
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}