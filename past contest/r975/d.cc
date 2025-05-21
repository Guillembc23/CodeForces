#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

int par(int a, vi & DSU) {
    if (DSU[a] == -1) return a;
    else return par(DSU[a],DSU);
}

void join(int a,int b, vi &DSU) {
    if (DSU[a] == -1) {

    } else if (DSU[b] == -1) {

    } else {

    }
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    vector<pair<int,int>> V(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        V[i] = {x,i};
    }
    sort(V.begin(),V.end());

    int r, l;
    r = l = V[n-1].first;
    vi DSU(n,-1);
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}