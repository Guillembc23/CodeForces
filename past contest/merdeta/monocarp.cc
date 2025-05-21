#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int MOD = 998244353;
//
//
//
ll fastexp(ll a, ll b) {
  if (b == 0) {
    return 1;
  } else if (b == 1) {
    return a % MOD;
  } else {
    return (fastexp(a, b / 2) * fastexp(a, b - b / 2)) % MOD;
  }
}

ll modinverse(ll a) { return fastexp(a, MOD - 2); }

ll calc(string s) {
  if (s.size() == 1) {
    return 1;
  }

  else {
    if (s.back() == '?') {
      s.pop_back();
      return (s.size() * calc(s)) % MOD;
    } else {
      s.pop_back();
      return calc(s) % MOD;
    }
  }
}

void solve() {
  int n, m;
  cin >> n >> m;

  string s;
  cin >> s;

  ll result = calc(s);

  if (s[0] == '?') {
    cout << "0" << endl;
  } else {
    cout << result << endl;
  }

  int pos;
  char c;
  while (cin >> pos >> c) {
    char aux = s[pos - 1];
    s[pos - 1] = c;

    if (aux != c and pos != 1) {
      if ((aux == '<' or aux == '>') and s[pos - 1] == '?') {
        result = result * pos % MOD;
      } else if (aux == '?' and (s[pos - 1] == '<' or s[pos - 1] == '>')) {
        if (result % (pos - 1) == 0) {
          result = result / (pos - 1);
        } else {
          result = result * modinverse(pos - 1) % MOD;
        }
      }
    }

    if (s[0] == '?') {
      cout << "0" << endl;
    } else {
      cout << result << endl;
    }
  }
}
//
//
//
int main() {
  int tt = 1;
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}