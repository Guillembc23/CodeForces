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
    vi a(n);
    map<int,int> M;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        M[a[i]]++;
    }

    int best = 0;
    int lbest;
    int rbest;
    for (int l = 0; l < n; l++)
    {
        if (M[a[l]] <= 1) {
            int r = l;
            while (r + 1 < n and M[a[r+1]] <= 1) {
                r++;
            }
            int curr = r - l + 1;
            if (curr > best) {
                best = curr;
                lbest = l;
                rbest = r;
            }
            l = r;
        }
    }
    
    if (best == 0) {
        cout << 0 << endl;
    } else {
        cout << lbest+1 << " " << rbest+1 << endl;
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