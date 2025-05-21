#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int i = 0, j = n - 1, bonus = 0, moves = 0;

  while (i < j) {
    if (bonus < a[j]) {
      int k = a[j] - bonus;
      if(k >= a[i]){
        moves += a[i];
        bonus += a[i];
        a[i] = 0;
        i++;
      }else{
        a[i] -= k;
        bonus += k;
        moves += k;
      }
      
    } else {
      bonus = 0;
      moves++;
      a[j] = 0;
      j--;
    }
  }

  while(i <= j){
    if (bonus + 1 <= a[j]) {
      a[j]--;
      moves++;
      bonus++;
    } else {
      bonus = 0;
      moves++;
      a[j] = 0;
      j--;
    }
  }
  

  cout << moves << endl;
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