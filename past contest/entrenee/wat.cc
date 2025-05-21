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

  tablero[2] = 38;
  tablero[7] = 14;
  tablero[8] = 31;
  tablero[15] = 26;
  tablero[21] = 42;
  tablero[28] = 84;
  tablero[36] = 44;
  tablero[51] = 67;
  tablero[71] = 91;
  tablero[78] = 98;
  tablero[87] = 94;
  tablero[99] = 80;
  tablero[95] = 75;
  tablero[92] = 88;
  tablero[89] = 68;
  tablero[74] = 53;
  tablero[64] = 60;
  tablero[62] = 19;
  tablero[49] = 11;
  tablero[46] = 25;
  tablero[16] = 6;

  int s;
  while (cin >> s) {
    solve(s);
  }
}