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

void solve() {
    int n;
    cin >> n;
    int min;
    cin >> min;
    int pre = min;
    int index = 0;
    bool pos = true;
    for (int i = 1; i < n; i++)
    {
        int j;
        cin >> j;
        if (j < min) {
            index = i;
            min = j;

            pos = true;
        } else {
            if (pre > j) pos = false;
        }
        pre = j;
    }
    if(pos){
        cout << index << endl;
    } else {
        cout << -1 << endl;
    }
  
}
//
//
//

int main() {
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}