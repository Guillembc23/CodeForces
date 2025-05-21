#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
//
//
//

int posible(ll k, vector<ll> num) {
  int n = num.size();

  int count = 0;
  ll x = 0;

  for (int i = 0; i < n; i++) {
    count += (x + num[i]) / k;
    if (num[i] + x >= k) {
      x = (num[i] + x) % k;
    } else {
      x = num[i];
    }
  }

  return count;
}

void solve() {
  int n, k;
  cin >> n >> k;

  vector<ll> num(n);

  ll max = 0, umax = 0;

  for (int i = 0; i < n; i++) {
    cin >> num[i];
    if (num[i] >= umax) {
      umax = num[i];
      if (umax > max) {
        swap(max, umax);
      }
    }
  }

  ll aux = max + umax;
  ll curr = aux;
  ll sol = 0;

  while (aux > 0) {
    aux /= 2;
    int l = posible(curr, num);
    if (l >= k) {
      sol = curr * k;
      curr += aux;
    } else {
      curr -= aux;
    }
  }

  cout << sol << endl;
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}