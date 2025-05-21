#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void solve() {
    int n;
    cin >> n;

    vi multiplication(2*n, 1);

    vi addition(2*n, 0);

    for (int i = 0; i < 2*n; i++)
    {
        char c;
        cin >> c;
        int x;
        cin >> x;
        if (c == '+') addition[i] = x;
        else multiplication[i] = x;
    }
    
    vi maxmult(2*n);
    maxmult[2*n-1] = multiplication[2*n-1];
    maxmult[2*n-2] = multiplication[2*n-2];
    for (int i = n-2; i >= 0; i--)
    {
        maxmult[2*i] = maxmult[2*(i+1)] + (multiplication[2*i]-1)*max(maxmult[2*(i+1)],maxmult[2*(i+1)+1]);
        maxmult[2*i+1] = maxmult[2*(i+1)+1] + (multiplication[2*i+1]-1)*max(maxmult[2*(i+1)],maxmult[2*(i+1)+1]);
    }
    int sum = maxmult[0]+maxmult[1];
    for (int i = 0; i < n-1; i++)
    {
        sum += (addition[2*i]+addition[2*i+1])*max(maxmult[2*(i+1)+1],maxmult[2*(i+1)]);
    }
    sum += addition[2*n-1];
    sum += addition[2*n-2];

    cout << sum << endl;
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