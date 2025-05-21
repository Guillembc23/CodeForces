#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;



signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cout.setf(ios::fixed);
  cout.precision(4);

  double m, n, l;
  while(cin >> m >> n >> l) {
    cout << 2*(m)*(l-n)/(l*l)  << endl;
  }
  
}