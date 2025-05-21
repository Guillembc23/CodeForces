#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define pb push_back

using namespace std;


void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n);
    vi b (m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    unordered_map<int,int> M;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] >= a[i]) M[b[j]-a[i]]++;
        }
    }
    
    int best = 0, num = 0;
    for (auto u : M) {
        if (u.second > num or (u.second == num and u.first < best)) {
            num = u.second;
            best = u.first;
        }
    }
    cout << best << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(7);
  int tt = 1;
  // cin >> tt;
  while (tt--) {
    solve();
  }
}