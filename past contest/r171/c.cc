#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

const int INF = 1e16;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int disponibles = n;
    int ahorro = 0;
    for (int i = n; i > 0; i--)
    {
        disponibles = min(disponibles,i);
        if (s[i-1] == '1' and disponibles >= 2) {
            ahorro += i;
            disponibles -= 2;
        }
    }
    
    cout << n*(n+1)/2 - ahorro << endl;
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}