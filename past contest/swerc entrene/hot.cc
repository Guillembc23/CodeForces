#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
    int n;
    cin >> n;
    vi temp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }
    sort(temp.begin(),temp.end());
    int i = n/2;
    int j = -1;
    cout << temp[i];
    i += j;
    while(0 <= i and i < n) {
        cout << " "<< temp[i];
        j = -j;
        if(j > 0) j++;
        else j--;
        i += j;
    }
    cout << endl;
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}