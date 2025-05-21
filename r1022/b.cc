#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int ones(int x) {
    if (x == 0) return 0;
    int sol = 0;
    if (x % 2 == 1) {
        sol++;
    }
    return sol + ones(x/2);
}


void solve() {
    int n, x;
    cin >> n >> x;
    int count = ones(x);
    if (count == 0) {
        if (n == 1 ){
            cout << -1 << endl;
        }else if (n % 2 == 0) {
            cout << n+x << endl;
        } else {
            cout << 6 + (n-3)+x << endl;        
        }

    } else if (count == 1 and x > 1) {
        if (n % 2 == 1) {
            cout << n-1 + x << endl;
        } else {
            cout << n + x << endl;
        }

    } else if (x == 1) {
        if (n %2 == 1) {
            cout << n << endl;
        } else {
            cout << 5 + (n-2) << endl;
        }
    } else {
        if (n > count) {
            if ((n - count) % 2 == 0) {
                cout << x + (n - count) << endl;
            } else if (count > 1){
                cout << x + (n - count) + 1 << endl;
            }
        } else {
            cout << x << endl;
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