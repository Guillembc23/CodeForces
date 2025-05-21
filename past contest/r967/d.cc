#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;


void solve() {
    int n;
    cin >> n;
    vi a(n);
    unordered_map<int,int> M;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        M[a[i]]++;
    }
    
    int m = 0;
    int l = 0, r = 0;
    set<pair<int,int>> S;
    vi sol;
    while (true) {
        
    }
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