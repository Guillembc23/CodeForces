#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define cmplx complex<double>
#define vd vector<cmplx>
#define vb vector<bool>
#define si set<int>
#define pb push_back
const int MOD = 998244353;

/*
for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
    }
  }
*/
void vin(int &n, vd &a) {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
}

void conv(vd &a, int k) {
  int n = a.size();
  vd b(k, 0);
  for (int i = 0; i < n; i++) {
    b[i] = a[i];
  }
  a = b;
}

cmplx unitroot (int l) {
    return (cos(2*M_PI/l), sin(2*M_PI/l));
}

void fft(vd &a, vd &b, int r, int d, int k) {
    if (d == k) b[r] = a[r];
    else {
        fft(a,b,r,2*d,k);
        fft(a,b,r+d,2*d,k);
        for (int i = r+d; i < k; i += 2*d)
        {
            b[i] *= unitroot(k/(2*d));
        }
    }
}

void ifft(vd &a, vd &b, int r, int d, int k) {
    if (d == k) b[r] = a[r];
    else {
        ifft(a,b,r,2*d,k);
        ifft(a,b,r+d,2*d,k);
        for (int i = r+d; i < k; i += 2*d)
        {
            b[i] *= unitroot(-k/(2*d));
        }
    }
}

void solve() {
  int n, m;
  vd a, b;
  vin(n, a);
  vin(m, b);
  cout << "nice" << endl;
  int k = log2(max(n, m)) + 1;
  k = (1 << k);
  conv(a, k);
  conv(a, k);
  vd c(k), d(k);
  fft(a,c,0,1,k);
  fft(b,d,0,1,k);
  vd e(k);
  for (int i = 0; i < k; i++) e[i] = c[i]*d[i];
  vd f(k);
  ifft(e,f,0,1,k);
  for (int i = 0; i < k; i++) cout << f[i] << " ";
  cout << endl;
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