#include <bits/stdc++.h>
#define endl "\n"
#define int unsigned long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;



signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cout.setf(ios::fixed);
  cout.precision(4);

  int n, b;
  while (cin >> n >> b) {
    if (n <= b) cout << "B" << endl;
    else { 
        if (b == n-1) cout << "B" << endl;
        else cout << "A" << endl;
    }
  }
}