#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;


void solve() {
    int n, m;
    cin >> n >> m;
    vector<bool> used(n,false);
    int sol = n;
    int extra = 0;
    vector<pair<int,pair<int,int>>> Q;
    for (int i = 0; i < m; i++)
    {
        int a, d, k;
        extra++;
        cin >> a >> d >> k;
        Q.push_back({a,{d,k}});
    }
    sort(Q.begin(),Q.end());
    for (int i = m-1; i >= 0; i--)
    {
        int a, d, k;
        a = Q[i].first;
        d = Q[i].second.first;
        k = Q[i].second.second;
        sol -= k;
        bool found = false;
        for (int j = 0; j <= k and not found; j++)
        {
            if (used[a+j*d]) {
                sol++;
                found = true;
            }
            used[a+d*j] = true;
        }
    }
    cout << sol << endl;
    
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