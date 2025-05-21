#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>

typedef long long int ll;
const int MOD = 998244353;
//
//
//
bool posible(int a, int b, int c) {
    return b%2 == c%2;
}

void solve() {
  int a,b,c;
  cin >> a >> b >> c;
  if(posible(a,b,c)) cout << 1;
  else cout << 0;
  cout << " ";
  if(posible(b,c,a)) cout << 1;
  else cout << 0;
  cout << " ";
  if(posible(c,a,b)) cout << 1;
  else cout << 0;
  cout << endl;

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