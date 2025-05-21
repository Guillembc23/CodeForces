#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define si set<int>
#define pb push_back
const int MOD = 998244353;

void print (vi a);

int fexp(int a, int n) {
  if (n == 0) return 1;
  if (n == 1)
    return a % MOD;
  else
    return fexp(a, n / 2) * fexp(a, n - n / 2) % MOD;
}

int root(int i) { return fexp(3, ((1 << (23 - i)) % (MOD - 1))*119); }

void fft(vi &a) {
  int n = a.size(); 
  if (n > 1) {
  vi a1(n - n / 2);
  vi a2(n / 2);
  for (int i = 0; i < n; i += 2) a1[i/2] = a[i];
  for (int i = 1; i < n; i += 2) a2[i/2] = a[i];
  fft(a1);
  fft(a2);
  int r = root(log2(n));
  for (int i = 0; i < n/2; i++) a2[i] = a2[i]*r%MOD;
  for (int i = 0; i < n; i += 2) a[i] = a1[i/2];
  for (int i = 1; i < n; i += 2) a[i] = a2[i/2];
  }
}

void ifft(vi &a) {
  int n = a.size();
  if (n > 1) {
  vi a1(n - n / 2);
  vi a2(n / 2);
  for (int i = 0; i < n; i += 2) a1[i/2] = a[i];
  for (int i = 1; i < n; i += 2) a2[i/2] = a[i];
  fft(a1);
  fft(a2);
  int r = fexp(root(log2(n)), MOD - 2);
  for (int i = 0; i < n/2; i++) a2[i] = a2[i]*r%MOD;
  for (int i = 0; i < n; i += 2) a[i] = a1[i/2];
  for (int i = 1; i < n; i += 2) a[i] = a2[i/2];
  }
}

void print (vi a) {
    int n = a.size();
    cout << a[0];
    for (int i = 1; i < n; i++)cout << " " << a[i];
    cout << endl;
}

vi conv(vi a, vi b) {
  int n = 1 + ceil(log2(max(a.size(), b.size())));
  vi c(1 << n, 0), d(1 << n, 0), e(1 << n);
  for (int i = 0; i < a.size(); i++) c[i] = a[i];
  for (int i = 0; i < b.size(); i++) d[i] = b[i];
  fft(c);
  print (c);
  fft(d);
  print (d);
  for (int i = 0; i < (1 << n); i++)
  {
    e[i] = c[i] * d[i] % MOD;
  }
  ifft(e);
  return e;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vi a(n) , b(m);
  for (int i = 0; i < n; i++) 
    cin >> a[i];
  for (int i = 0; i < m; i++) 
    cin >> b[i];
    vi c = conv (a , b);
    print (c);
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);

  int tt = 1;
  //cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}