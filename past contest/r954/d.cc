#include <bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>
using namespace std;

int conv (char a) {
    return int(a) - int('0');
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    int sum = 0;
    bool zero = false;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        a[i] = conv(c);
        if (a[i] == 0) {
            zero = true;
        } 
        
        if (a[i] != 1) {
            sum += a[i];
        }
    }


    if (zero) {
        if (n >3) {
            cout << 0 << endl;
        }

        if (n == 2) {
            cout << a[0]*10 + a[1] << endl;
        }

        if (n == 3) {
            cout << min(min(a[0]*10 + a[1] + a[2] ,(a[0]*10 + a[1] )* a[2] ), min( a[0] + a[1]*10 + a[2],a[0]*( 10*a[1] + a[2]))) << endl;
        }

        return;
    }

    int sol = 1e5;
    for (int i = 0; i < n-1; i++)
    {
        int res = a[i]*10 + a[i+1] + sum;
        if (a[i] != 1) res -= a[i];
        if (a[i+1] != 1) res -= a[i+1];
        sol = min (sol, res);
    }
    cout << sol << endl;
    
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