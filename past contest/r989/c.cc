#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vc vector<char>
#define vvc vector<vc>
#define pb push_back

int dfs(int u, int v, vvc &board, vvi &type, int n, int m) {
    if (type[u][v] == 0 and board[u][v] == '?') {
        type[u][v] = 3;
    } else if (type[u][v] == 0) {
        type[u][v] = 2;
        if (board[u][v] == 'U') {
            u--;
            if (u < 0) type[u+1][v] = 1;
            else  type[u+1][v] = dfs(u,v,board,type,n,m);

            u++;
        }
        if (board[u][v] == 'D') {
            u++;
            if (u >= n) type[u-1][v] = 1;
            else type[u-1][v] = dfs(u,v,board,type,n,m);
            u--;
        } 
        if (board[u][v] == 'R') {
            v++;
            if (v >= m) type[u][v-1] = 1;
            else type[u][v-1] = dfs(u,v,board,type,n,m);
            v--;
        } 
        if (board[u][v] == 'L') {
            v--;
            if (v < 0) type[u][v+1] = 1;
            else type[u][v+1] = dfs(u,v,board,type,n,m);
            v++;
        } 
    }
    return type[u][v];
}

void solve() {
    int n, m;
    cin >> n >> m;
    vvc board(n, vc(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }
    
    vvi type(n, vi(m,0)); // tipus 1: surt 2: no 3: va a un indeterminat

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dfs(i,j,board,type,n,m);
        }
    }

    int sol = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (type[i][j] == 2) {
                sol++;
            } else if (type[i][j] == 3) {
                bool bucle = false;
                if (i + 1 < n and type[i+1][j] != 1) bucle = true;
                if (i - 1 >= 0 and type[i-1][j] != 1) bucle = true;
                if (j + 1 < m and type[i][j+1] != 1) bucle = true;
                if (j - 1 >= 0 and type[i][j-1] != 1) bucle = true;
                if (bucle) sol++;
            }
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
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}