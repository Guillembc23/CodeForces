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
    if (n%2 != 0) {
        if (n <= 25) cout << -1 << endl;
        else {
            vi a(n,-1);
            a[0] = 1;
            a[4] = 1;
            a[1] = 2;
            a[17] = 2;
            a[26] = 2;
            int j = 6;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == -1) {
                    a[i] = j/2;
                    j++;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (i != 0) cout << " ";
                cout << a[i];
            }
            cout << endl;
        }
    } else {
        for (int i = 0; i < n; i++)
        {
            if (i != 0) cout << " ";
            cout << i/2 + 1;
        }
        cout << endl;
    }
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