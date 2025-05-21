#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

int absmod(int a, int mod) {
    a = a%mod;
    if (a < 0) a += mod;
    return a;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int w, d, k;
  while (cin >> w >> d >> k) {
    int mod = 2*(d-1);
    vector<bool> lives(mod, true);
    for (int i = 0; i < w; i++) {
      int r;
      char c;
      cin >> r >> c;
      if (r == 0) c = 'u';
      if (r == d-1) c = 'u';
      if (c == 'd') {
        lives[absmod(r-i,mod)] = false;
      } else {
        lives[absmod(r+d-1-i,mod)] = false;
      }
    }

    for (int i = 0; i < k; i++)
    {
        if (lives[absmod(-i-1,mod)]) cout << "+";
        else cout << "-";
    }
    cout << endl;
  }
}