#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define si set<int>
#define pb push_back
const int MOD = 998244353;

struct point {
    int pos;
    bool type;
};

bool comp (point a, point b) {
    return a.pos < b.pos;
}

void solve() {
  int n;
  cin >> n;
  vector<point> a(2*n);
  vi pes(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i].pos;
    a[i].type = true;
  }
   for (int i = n; i < 2*n; i++)
  {
    cin >> a[i].pos;
    a[i].type = false;
  }
   for (int i = 0; i < n; i++)
  {
    cin >> pes[i];
  }
  sort(a.begin(),a.end(),comp);

  stack<int> b;
  vector<int> c;
  for (int i = 0; i < 2*n; i++)
  {
    if (a[i].type) b.push(a[i].pos);
    else {
        c.pb(a[i].pos - b.top());
        b.pop();
    }
  }
  
  sort(pes.begin(),pes.end());
  sort(c.begin(),c.end());

  int sol = 0;
  for (int i = 0; i < n; i++)
  {
    sol += c[i]*pes[n-i-1];
  }
  
  cout << sol << endl;
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}