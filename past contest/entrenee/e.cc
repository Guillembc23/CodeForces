#include <bits/stdc++.h>
#define vi vector<int>
#define int long long
using namespace std;

mt19937 rng;

vi tablero(100, 0);

void solve(int s) {
  rng.seed(s);

  int red = 1;
  int blue = 1;
  int torn = 0;
  while (++torn) {
    unsigned int r = rng();
    
    int d = r % 6 + 1;

    if (torn % 2) {
      red += d;
      if (red == 100) {cout << "RED" << endl; return;}
      if (red > 100) red = 200 - red;
      if (tablero[red]) red = tablero[red];
      if (d == 6) torn--;
    } else {
      blue += d;
      if (blue == 100) {cout << "BLUE" << endl; return;}
      if (blue > 100) blue = 200 - blue;
      if (tablero[blue]) blue = tablero[blue];
      if (d == 6) torn--;
    }
  }
}

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int s;
  while (cin >> s) {
    solve(s);
  }
}