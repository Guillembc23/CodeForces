#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

pair<int, int> mex(vi &now) {
    vector<bool> apear(now.size()+2,false);
    for (int i = 0; i < now.size(); i++)
    {
        if (now[i] < now.size()+2) {
            apear[now[i]] = true;
        }
    }
    pair<int,int> p = {-1,-1};
    for (int i = 0; i < now.size()+2; i++)
    {
        if (not apear[i]) {
            if (p.first == -1) p.first = i;
            else {
                p.second = i;
                return p;
            }
        }
    }
    return p;
}

void solve() {
  int n, m;
  cin >> n >> m;
  unordered_map<int,vi> g;
  int maxu = 0;
  int maxv = 0;
  vi nices;
  for (int i = 0; i < n; i++) {
    vi now;
    int l;
    cin >> l;
    while (l--) {
      int x;
      cin >> x;
      now.push_back(x);
    }
    sort(now.begin(), now.end());
    pair<int, int> p = mex(now);
    g[p.first].push_back(p.second);
    maxu = max(p.first,maxu);
    maxv = max(p.second,maxv);
    nices.push_back(p.first);
  }
  sort(nices.begin(),nices.end());

  vi best(m + 1, 0);
  for (int i = 0; i <= m; i++) {
    best[i] = i;
  }

  int aux = 0;
  for (int i = nices.size()-1; i >= 0; i--)
  {
    for (auto u : g[nices[i]])
    {
        if (u <= m) best[nices[i]] = max(best[nices[i]],best[u]);
        else best[nices[i]] = max(best[nices[i]],u);
    }
    if (g[nices[i]].size() > 1) aux = max(aux,best[nices[i]]);
  }
  int sum = 0;
  aux = max(aux,maxu);
  for (int i = 0 ; i <= min(m,maxv) ; i++)
  {
    best[i] = max(best[i],aux);
    sum += best[i];
  }
  if (m > maxv) sum += (maxv+1 + m)*(m - maxv )/2;
  cout << sum << endl;
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