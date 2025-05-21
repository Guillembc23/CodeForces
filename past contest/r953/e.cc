#include <bits/stdc++.h>
#define vi vector<int>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vi a(n), aa(n);
    vi b(n), bb(n);
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        if (x == '0') a[i] = 0;
        else a[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        if (x == '0') b[i] = 0;
        else b[i] = 1;
    }
    
    
    for (int i = 0; i < n-2; i++)
    {
        if (a[i] == 0 and a[i+2] == 0 and b[i+1] == 0) {
            b[i+1] = 2;
        }
    }

    for (int i = 0; i < n-2; i++)
    {
        if (b[i] ==  1 and b[i+2] == 1 and a[i+1] == 0) {
            a[i+1] = 2;
        } else if (b[i] == 1 and b[i+2] == 2 and a[i+1] == 0) {
            a[i+1] = 3;
        }else if (b[i] == 2 and b[i+2] == 1 and a[i+1] == 0) {
            a[i+1] = 1;
        }else if (b[i] == 2 and b[i+2] == 2 and a[i+1] == 0) {
            a[i+1] = 1;
        }
    }
    
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