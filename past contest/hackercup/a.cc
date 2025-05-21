#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

const double INF = 1e9;

pair<double,double> intersect (pair<double,double> a,pair<double,double>b) {
  return {max(a.first,b.first),min(a.second,b.second)};
}

void solve(int cases) {
  int n;
  cin >> n;
  pair<double,double> p = {0,1e7};
  for (int i = 1; i <= n; i++)
  {
    double x, y;
    cin >> x >> y;
    if (x == 0) p = intersect(p,{i/y,INF});
    else p = intersect(p,{i/y,i/x});
  }
  cout << "Case #" << cases << ": ";
  if (p.first > p.second) cout << -1<< endl;
  else cout << p.first << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(7);
  int tt = 1;
  cin >> tt;
  for (int i = 1; i <= tt; i++)
  {
    solve(i);
  }
  
}