#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 999999893;

int exp (int a, int n) {
    if (n == 0) return 1;
    else if (n == 1) return a;
    else return exp(a,n/2)*exp(a,n - n/2)%MOD;
}

int inv (int a) {
    return exp(a,MOD - 1);
}

int mod (int n) {
    if (n > 0) return n %MOD;
    else return -((-n)%MOD);
}


void solve() {
  int n;
  cin >> n;

  int m1 = 0, m2 = 0, v1 = 0, v2 = 2;

  int s1 = MOD - 2, s2 = MOD - 2;

  if (n % 2 == 1) {
    s1 += exp(2,(n+1)/2);
    s2 += exp(2,(n+1)/2);
  } else {
    s1 += 2*exp(2,n/2);
    s2 += exp(2,n/2);
  }

  m1 = m1 + s1 %MOD;
  m2 = m2 + s2 %MOD;
  v1 = v1 + s1 %MOD;
  v2 = v2 + s2 %MOD;

  cout << m1  <<" " << m2 << " " << v1 << " " << v2 << endl;

  cout << (mod(m2*v1 - m1*v2))*inv(mod(v1*v1 - 2*v2*v2)) %MOD << endl;
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
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}