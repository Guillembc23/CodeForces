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

int exp (int n) {
    if (n == 0) return 1;
    else if (n == 1) return 2;
    else return exp(n/2)*exp(n - n/2);
}

void to_st(int a, int b, string &s1, string &s2) {
  if (a > 0 or b > 0) {
    if (a % 2 == 0)
      s1 = '0' + s1;
    else
      s1 = '1' + s1;
    if (b % 2 == 0)
      s2 = '0' + s2;
    else
      s2 = '1' + s2;
    to_st(a / 2, b / 2, s1, s2);
  }
}

void solve() {
  int a, b, r;
  cin >> a >> b >> r;
  string s1, s2;
  to_st(a, b, s1, s2);
  int l = s1.size();
  int pen = 0;
  for (int i = 0; i < l; i++)
  {
    if (s1[i] != s2[i]) {
        int dif = exp(l-i-1);
        if (s1[i] == '0') {
            if (pen < 0 and r >= dif) {
                r -= dif;
                pen += dif;
            } else {
                pen -= dif;
            }
        } else{ 
            if (pen > 0 and r >= dif) {
                r -= dif;
                pen -= dif;
            } else {
                pen += dif;
            }
        }
    }
  }
  cout << abs(pen) << endl;
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