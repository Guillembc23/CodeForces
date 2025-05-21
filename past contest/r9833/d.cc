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
    vi p(n,0);
    int j = n-1;
    for (int i = n-1; i > 0; i--)
    {
       while(true) {
        j--;
        if (j <= 0) break;
        cout << "? " << j << " " << i << endl;
        cout.flush();
        int x;
        cin >> x;
        if (x == 0) {
            p[i] = j;
            break;
        }
       }
       if (j <= 0) break;
    }
    cout << "!";
    for (int i = 1; i < n; i++)
    {
        cout << " "<< p[i];
    }
    cout << endl;
    cout.flush();
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}