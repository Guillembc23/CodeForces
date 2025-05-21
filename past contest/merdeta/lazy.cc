#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef unsigned long long int ll;
const int MOD = 998244353;

void rec(ll base, ll n, ll k, ll &count, ll &result){
    count++;
    if(base == count){
        result++;
    }
    if(base*k <= n){rec(base*k,n,k,count,result);}
    if(base%k < k-1 and base+1 <= n){rec(base+1,n,k,count,result);}
}

void solve(){
    ll n, k;
    cin >> n >> k;

    ll count=0, result=0;

    rec(1,n,k,count,result);

    cout << result << endl;
}
//
//
//

int main() {
  // ios_base::sync_with_stdio(0);
  // cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}