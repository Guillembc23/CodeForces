#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 998244353;

int squad(int n, int k) {
  int s = n / k;
  int r = n - s * k;  // sobrats
  int d = k - r;      // justos
  return (r * (r - 1)  * (s + 1) * (s + 1)/2) +( d * (d - 1)  * s * s/ 2) +
         (d * r * s * (s + 1));
}

int func (int i, vi &a, int b, int x) {
  int n = a.size();
  int curr = 0;
    for (int j = 0; j < n; j++) {
      curr += squad(a[j],i);
    }
    curr = b*curr - x*(i-1);
    return curr;
}

int ternary (int l, int r, vi &a, int b, int x)
{
    if (l + 3 <= r) {
        int mid1 = (2*l + r)/3;
        int mid2 = (l + 2*r) / 3;
        int k1 = func(mid1,a,b,x);
        int k2 = func(mid2,a,b,x);
        if (k1 > k2) return ternary (l,mid2,a,b,x);
        else return ternary(mid1,r,a,b,x);
    } else {
      return max(func(l,a,b,x),max(func(r,a,b,x),func((l+r)/2,a,b,x)));
    }
}

void solve() {
  int n, b, x;
  cin >> n >> b >> x;
  vi a(n);
  int maxi = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    maxi = max(maxi, a[i]);
  }
  cout << ternary(1,maxi+1,a,b,x)<< endl;
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