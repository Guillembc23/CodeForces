#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int n;
    cin >> n;


    vi b(2*n);
    for (int i = 0; i < 2*n; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(),b.end());
    vi a(2*n-1);

    int s = b[2*n-1];
    for (int i = 0; i < n; i++)
    {
        a[2*i] = b[2*n-2-i];
        s += b[2*n-2-i];
        if (i < n -1) {
            a[2*i+1] = b[i];
            s -= b[i];
        } 
    }

    cout << b[2*n-1];
    cout << " " << s;
    for (int i = 0; i < a.size(); i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
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