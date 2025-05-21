#include <bits/stdc++.h>
#define vi vector<int>
#define int long long
using namespace std;

void mod (vi &a, int c, set<pair<int,int>> P,set<pair<int,int>> V) {
    
    while (not P.empty()) {

    }
}

void solve() {
    int n, c;
    cin >> n >> c;
    vi a(n,n);
    set<pair<int,int>> P, V;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        V.insert({x,i});
        P.insert({i,x});
    }
    
}

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
}