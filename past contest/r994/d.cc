#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define pb push_back

const int INF = 1e15;

void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  vvi a(n, vi(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
        cin >> a[i][j];
    }
  }
  
  vvvi dp(n, vvi(m, vi(m, -1)));


  // dp[i][j][l] = minim cost arribar a (i,j) amb l shifts de la fila
  priority_queue<vector<int>> Q;
  for (int l = 0; l < m; l++)
  {
    Q.push({-(l*k + a[0][l]),0,0,l});
  }

  while(not Q.empty()) {
    int cost = -Q.top()[0];
    int i = Q.top()[1];
    int j = Q.top()[2];
    int l = Q.top()[3];
    Q.pop();
    if (dp[i][j][l] == -1) {
        dp[i][j][l] = cost;

        if (i == n-1 and j == m-1) {
            cout << cost << endl;
            return;
        }

        if (i < n-1) {
            for (int p = 0; p < m; p++)
            {
                Q.push({-(cost + p*k + a[i+1][(j+p)%m]),i+1,j,p});
            }
        }
        if (j < m-1) {
            Q.push({-(cost + a[i][(j+l+1)%m]),i,j+1,l});
        }
    }
  }


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