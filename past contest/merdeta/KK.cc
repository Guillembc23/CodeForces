#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
//
//
//
void rec(queue<int> list, set<int> used, int k){
    if(used.size() < k) {
        if(list.empty()) {
            cout << "FUCK" << endl;
        }else {
            used.insert(list.front());
            list.pop;
        }
    }
}

void solve() {
  int n, k;
  cin >> n >> k;

  queue<int> list;
  set<int> used;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    list.push(x);
  }

  
  
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