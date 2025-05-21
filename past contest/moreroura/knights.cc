#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

int sol (int n, int m) {
    if (n < m) swap(n,m);
    if (m == 1) return n;
    if (n == 2 and m == 2) return 4;
    if (m == 2) {
        if (n%4 == 0) return n;
        else if (n%4 == 1) return n+1;
        else if (n%4 == 2) return n+2;
        else return n+1;
    }
    else return ceil(1.0*n*m/2);
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  while(cin >> n >> m) {
    cout << sol(n,m) << endl;
  }
}