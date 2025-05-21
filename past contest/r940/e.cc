#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vd vector<double>
#define pb push_back
const int MOD = 1e9 + 7;
const int siz = 1e6 + 1;
vi prime(siz,true);

int fexp(int a, int n, int p) {
  int res = 1;
  while(n > 0) {
    if (n%2 == 1) {
      res = res*a%p;
    }
    a = a*a%p;
    n/= 2;
  }
  return res;
}

int inv (int a, int p) {
  return fexp(a,p-2, p);
}

int fact (int a) {
    int res = 1;
    int b = 1;
    while (b < a) {
        b++;
        res *= b;
    }
    return res;
}

int fun (int p, int n) {
    int res = 0;
    int act = p - 1;
    int pact = 1; // aço treballa mod p^2
    int i = p;
    while (i <= n) {
        res += act*pact % p;
        i++;
        if(i%p != 0) {
          act = act*i*inv(i-p,p)%p;
        } else {
          
        }
    }
    return res % MOD;
}

int fun4 (int p, int n) {
    int res = 0;
    int act = fact(p-1);
    int i = p;
    while (i <= n) {
        res += act % p;
        i++;
        act = act*i/(i-p);
    }
    return res % MOD;
}

void solve() {
  int n;
  cin >> n;

  int sol = 0;
  for (int i = 2; i <= n; i++)
  {
    if (i == 4) {
      sol += fun(i,n);
        sol %= MOD;
    }else if (prime[i]) {
        sol += fun(i,n);
        sol %= MOD;
    }
  }
  cout << sol << endl;
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  prime[0] = false;
  prime[1] = false;
  for (int i = 0; i <= siz; i++)
  {
    if (prime[i]) {
        int j = 2*i;
        while (j <= siz) {
            prime[j] = false;
            j += i;
        }
    }
  }
  prime[4] = true;

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}