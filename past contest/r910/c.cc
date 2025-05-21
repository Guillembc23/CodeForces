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
void print(vvi &arr , int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (j > 0) {
        cout << " ";
      }
      if (arr[i][j] == 0) {
        cout << "R";
      } else {
        cout << "B";
      }
    }
    cout << endl;
  }
}

void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  if (n + m > k or (m + n + k) % 2 == 1) {
    cout << "NO" << endl;
  } else {
  vvi hor(n+1, vi(m , 0));
  vvi ver(n, vi(m+1, 0));
    cout << "YES" << endl;
    ver[0][1] = 1;
    ver[0][2] = 1;
    ver[0][3] = 1;
    hor[1][0] = 1;
    hor[2][0] = 1;

    for (int i = 2; i < m; i += 2) {
      hor[1][i] = 1;
    }

    for (int i = 1 + (m % 2); i < n; i += 2) {
      ver[i][m] = 1;
    }
    print(hor,n+1,m);
    print(ver,n,m+1);
  }
}
//
//
//

int main() {
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}