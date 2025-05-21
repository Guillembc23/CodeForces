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
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    if (n % 2 == 1) {
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            if (i < 3) a[i] = i;
            else a[i] = (i+1)%2;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[(x+i)%n] != a[(y+i)%n]) {
                for (int j = 0; j < n; j++)
                {
                    if (j > 0) cout << " ";
                    cout << a[(i+j)%n];
                }
                cout << endl;
                return;
            }
        }
    } else {
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = i%2;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[(x+i)%n] != a[(y+i)%n]) {
                for (int j = 0; j < n; j++)
                {
                    if (j > 0) cout << " ";
                    cout << a[(i+j)%n];
                }
                cout << endl;
                return;
            }
        }
        if (n == 4) {
            a = {0,2,0,1};
        } else {
            for (int i = 0; i < n; i++)
            {
                if(i < 6) a[i] = i%3;
                else a[i] = i % 2;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[(x+i)%n] != a[(y+i)%n]) {
                for (int j = 0; j < n; j++)
                {
                    if (j > 0) cout << " ";
                    cout << a[(i+j)%n];
                }
                cout << endl;
                return;
            }
        }
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