#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vvi vector<vi>
using namespace std;

int cost (multiset<int> S, int k) {
    vi a;
    for (int u : S)
    {
        a.push_back(u);
    }


    if (a.size() % 2 == 0) {
        int cost = 0;
        for (int i = 0; i+1 < a.size(); i += 2)
        {
          cost += (a[i+1] - a[i])/k;
        }
        return cost;
    } else {
        int cost = 0;

        for (int i = 0; i+2 < a.size(); i += 2)
        {
          cost += (a[i+2] - a[i+1])/k;
        }

        int best = cost;

        for (int i = 0; i+2 < a.size(); i += 2)
        {
          cost += (a[i+1] - a[i])/k;
          cost -= (a[i+2] - a[i+1])/k;
          best = min (best,cost);
        }
        return best;
    }
    
}

void solve() {
  int n, k;
  cin >> n >> k;
  map<int,multiset<int>> M;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    M[x % k].insert(x);
  }

  
  int total = 0;
  int impars = 0;
  for (auto s : M) {
    if (s.second.size() % 2 == 1) impars++;
    total += cost(s.second,k);
  }

  if (impars > 1) cout << -1 << endl;
  else cout << total << endl;
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