#include <bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vvi vector<vi>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vi a(m);
    vector<char> c(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
    }
    sort(c.begin(),c.end());

    int j = 0;
    for (int i = 0; i < m; i++)
    {
        if (i == 0 or a[i] != a[i-1]) {
            s[a[i]-1] = c[j];
            j++;
        }
    }
    
    cout << s << endl;
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