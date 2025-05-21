#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

const long long P = 1e9 + 123;

int factorial(int a) {
    int b = 701242570;
    while (a > 1e8) {
        b *= a;
        b % P;
        a--;
    }
    return b;
}

void solve() {
    for (int i = 1; i <= 31; i++)
    {
        //cout << i << endl;
        cout << factorial((2 >> i-1)-1 + 1e8) << "," << endl;
    }
    
}

signed main() {
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    solve();
  }
}