#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

int x(int n) {
  if (n == 0) return 0;
  if (n == 1 or n == 2) return 1;
  else return 2;
  }

int m(int n) {
  if (n % 3 == 1) return 0;
  else return 1;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  char c;
  int n;
  while (cin >> c >> n) {
    if (c == 'X') {
      cout << x(n) << endl;
    } else {
      cout << m(n) << endl;
    }
  }
}