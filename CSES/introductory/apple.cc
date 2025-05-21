#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;

signed main() {
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);

  int n;
  cin >> n;
  vi a(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  set<int> s;
  s.insert(0);
  for (int i = 0; i < n; i++) {
    set<int> s1 = s;
    for (auto v : s)
    {
        s1.insert(v + a[i]);
    }
    s = s1;
  }

  int best = 1e9;
  for (auto v : s)
    {
        best = min (abs(sum - 2*v), best);
    }
    cout << best << endl;
}