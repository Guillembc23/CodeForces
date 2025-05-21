#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, d;
  while(cin >> n >> d) {
    vi a(n,0);
    while (d--) {
        int t, c;
        cin >> t >> c;
        t--;
        a[t] = max(a[t],c);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
    
  }
}