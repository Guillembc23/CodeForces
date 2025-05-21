#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;
    map<int,int> M;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        M[a]++;
    }
    vector<pair<int,int>> b;
    for (auto u : M) {
        b.push_back(u);
    }
    int last = 0;
    int ma = 0;
    int curr = 0;
    for (int i = 0; i < b.size(); i++)
    {
        curr += b[i].second;
        if (i > 0 and b[i].first != b[i-1].first+1) {
            curr = b[i].second;
            last = i;
        }
        while (i >= last+k) {
            curr -= b[last].second;
            last++;
        }
        ma = max(ma,curr);
    }
    cout << ma << endl;
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