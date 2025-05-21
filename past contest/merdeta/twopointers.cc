#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
    int n, t;
    cin>> n >> t;

    vector<int> a(n);

    for(int i=0; i < n; i++){cin >> a[i];}

    int i = 0, j = 0, score = 0, best = 0, dist = 0; 

    while(j <= n){
        if(dist <= t){
            best = max(best, score);
            dist += a[j];
            j++;
            score++;
        }else{
            dist -= a[i];
            i++;
            score--;
        }
    }

    cout << best << endl;

}
//
//
//
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  //cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}