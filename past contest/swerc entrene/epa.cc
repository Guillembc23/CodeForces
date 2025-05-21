#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
  int n;
  cin >> n;
  int ax, ay, bx, by;
  cin >> ax >> ay >> bx >> by;
  ax--;
  ay--;
  bx--;
  by--;
  vi x(n), y(n);
  vvi tabl(n, vi(n, 0));
  tabl[bx][by] = 1;
  int count = 1;

  bool alicewin = false;

  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
    if (bx - ax == x[i] and by - ay == y[i]) alicewin = true;
    if (0 <= bx + x[i] and bx + x[i] < n and 0 <= by + y[i] and by + y[i] < n) {
      if (tabl[bx + x[i]][by + y[i]] == 0) {
        tabl[bx + x[i]][by + y[i]] = 1;
        count++;
      }
    }
  }
  if (not alicewin) {
    for (int i = 0; i < n and (not alicewin); i++) {
      for (int j = 0; j < n; j++) {
        if (bx - ax == x[i] + x[j] and by - ay == y[i] + y[j]) alicewin = true;
        if (0 <= bx + x[i] + x[j] and bx + x[i] + x[j] < n and
            0 <= by + y[i] + y[j] and by + y[i] + y[j] < n) {
          if (tabl[bx + x[i] + x[j]][by + y[i] + y[j]] == 0) {
            tabl[bx + x[i] + x[j]][by + y[i] + y[j]] = 1;
            count++;
          }
        }
      }
    }
  }
  if (alicewin)
    cout << "Alice wins" << endl;
  else if (count == n * n)
    cout << "Bob wins" << endl;
  else {
    bool found = false;
    for (int i = 0; i < n and (not found); i++) {
      for (int j = 0; j < n and (not found); j++) {
        if (tabl[i][j] == 0) {
          cout << "tie " << i + 1 << " " << j + 1 << endl;
          found = true;
        }
      }
    }
  }
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}