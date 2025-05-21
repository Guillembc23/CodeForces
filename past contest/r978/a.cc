#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;


void solve() {
    int n, r;
    cin >> n >> r;
    int tot = 2*r;
    int many = 0;
    int tope = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        tot -= a;
        if (a % 2 == 1) {
            a--;
            tope++;
        }
        many += a;
    }
    many += min(tope,tot);
    cout << many << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}