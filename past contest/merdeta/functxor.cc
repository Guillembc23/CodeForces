#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int MOD = 998244353;
//
//
//

int xorcalc(vector<int> tree, int treesize, int a) {
  int result = 0;
  int pos = (treesize + 1) / 2 + a - 1;

  while (a > 0) {
    if (a % 2 == 1) {
      result = result ^ tree[pos - 1];
      pos = pos / 2 - 1;
    } else {
      pos = pos / 2;
    }
    a = a / 2;
  }

  return result;
}

void solve() {
  int n;
  cin >> n;

  int aux = n;
  int logn = 0;

  while (aux > 1) {
    aux = aux - aux / 2;
    logn++;
  }

  int size = 2;
  while (logn > 0) {
    size = size * 2;
    logn--;
  }

  int element1 = size / 2;

  size--;

  vector<int> tree(size, 0);

  for (int i = 0; i < n; i++) {
    int j = element1 + i;
    cin >> tree[j - 1];
    while (j > 1) {
      tree[j / 2 - 1] = tree[j / 2 - 1] ^ tree[element1 + i - 1];
      j = j / 2;
    }
  }

  ll result = 0;

  for (ll i = 1; i <= n; i++) {
    for (ll j = i; j <= n; j++) {
      result = (result + ((j - i + 1) * (xorcalc(tree, size, j) ^
                                         xorcalc(tree, size, i - 1))) %
                             MOD) %
               MOD;
    }
  }

  cout << result << endl;
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