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
int bfs(int v, vi &left, vi &right, string &s) {
  if (left[v] == 0 and right[v] == 0)
    return 0;
  else {
    int le, ri;
    if (left[v] != 0) {
    le = bfs(left[v], left, right, s);
    if (s[v - 1] != 'L') le++;
    }
    if(right[v] != 0) {
    ri = bfs(right[v], left, right, s);
    if (s[v - 1] != 'R') ri++;
    }
    if (left[v] == 0) return ri;
    else if (right[v] == 0) return le;
    else return min(le, ri);
  }
}

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vi left(n + 1), right(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> left[i + 1] >> right[i + 1];
  }

  cout << bfs(1, left, right, s) << endl;
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