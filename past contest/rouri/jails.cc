#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

bool pos (int m, int d, vi &a) {
    int n = a.size();
    int i = 0;
    int j = 0;
    m--;
    while (j < n-1) {
        j++;
        if (abs(a[j]-a[i]) >= d) {
            m--;
            i = j;
        }
    }
    return m <= 0;
}

int binsearch(int l, int r, int m, vi &a) {
    if (l+1 >= r) return l;
    else {
        int mid = (l+r)/2;
        if (pos(m,mid,a)) {
            return binsearch(mid,r,m,a);
        } else {
            return binsearch(l,mid,m,a);
        }
    }
}


void solve() {
    int m, n;
    while (cin >> m >> n) {
        vi a(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        cout << binsearch(1,1e9+1,m,a) << endl;
    }
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    solve();
  }
}