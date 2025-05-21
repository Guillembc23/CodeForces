#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

void dfs(int u, vector<vector<pair<int,int>>> &g, vector<pair<int,int>> &vis) {

}

void monotonic (vi &a, vi &A) {
    int n = a.size();
    stack<int> S;
    for (int i = n-1; i >= 0; i--)
    {
        while(not S.empty() and S.top() < a[i]) S.pop();
        if (S.empty()) A[i] = -1;
        else A[i] = S.top();
        S.push(a[i]);
    }
}

void solve() {
    int n;
    cin >> n;
    vector<vector<pair<int,int>>> g(n);
    vi a(n), b(n), c(n);
    vi aa(n), bb(n), cc(n);
    vi A(n), B(n), C(n);
    for (int i = n-1; i >= 0; i--)
    {
        cin >> a[i];
        a[i]--;
        aa[a[i]] = i;
    }
    monotonic(a,A);
    for (int i = n-1; i >= 0; i--)
    {
        cin >> b[i];
        b[i]--;
        bb[b[i]] = i;
    }
    monotonic(b,B);
    for (int i = n-1; i >= 0; i--)
    {
        cin >> c[i];
        c[i]--;
        cc[c[i]] = i;
    }
    monotonic(c,C);
    vector<pair<int,int>> vis (n,{-1,-1});
    vis[0] = {-1,0};
    for (int i = 0; i < n; i++)
    {
        if (i == 0 or vis[i].first != -1) {
            cout << i << endl;
            if (A[aa[i]] != -1) vis[A[aa[i]]] = {i,0};
            cout << A[aa[i]] << endl;
            if (B[bb[i]] != -1) vis[B[bb[i]]] = {i,1};
            cout << B[bb[i]] << endl;
            if (C[cc[i]] != -1) vis[C[cc[i]]] = {i,2};
            cout << C[cc[i]] << endl;
        }
    }
    if (vis[n-1].first == -1) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<pair<int,int>> sol;
    int j = n-1;
    while (j > 0) {
        sol.pb({j,vis[j].second});
        j = vis[j].first;
    }
    cout << sol.size() << endl;
    for (int i = sol.size()-1; i >= 0; i--)
    {
        if (sol[i].second == 0) cout << "q ";
        if (sol[i].second == 1) cout << "k ";
        if (sol[i].second == 2) cout << "j ";
        cout << sol[i].first+1 << endl;
    }
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