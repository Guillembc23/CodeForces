#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int MOD = 998244353;
//
//
//

void solve() {
    int numodd = 0;

    int n, k;

    cin >> n>>k;

    vector<int> arr(26, 0);

    for(int i= 0; i < n; i++){
        char x;
        cin >> x;
        arr[int(x) - int('a')]++;
        if(arr[int(x) - int('a')]%2 == 1){
            numodd++;
        }else{
            numodd--;
        }
    }

    if(numodd - k < 2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
}
//
//
//
int main() {
  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}