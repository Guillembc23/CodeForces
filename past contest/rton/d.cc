#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>

typedef long long int ll;
const int MOD = 998244353;
//
//
//
bool pos(vi a, int s, int n) {
    int i = 0, j = 0, curr = a[0];
    bool res = false;
    while(not res) {
        if (curr < s) {
            j++;
            curr += a[j];
            if(j == n) break;
        } else if (curr > s) {
            curr -= a[i];
            i++;
            if(i == n) break;
        } else {
            res = true;
        }
    }
    return res;
}

void solve() {
    int n, q;
    cin >> n >> q;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++)
    {
        int type;
        cin >> type;
        if(type == 2) {
            int x, y;
            cin >> x;
            cin >> a[x-1];
        } else {
            int s;
            cin >> s;
            if(pos(a,s, n)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
//
//
//

int main() {
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}