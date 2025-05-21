#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

string up, down;

int calc (int r, int c) {
    if (r == 0) return up[c] == 'A';
    return down[c] == 'A';
} 

void print (vi &a) {
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve() {
    int n;
    cin >> n;
    cin >> up >> down;
    vi dp1(n/3+1,0);
    vi dp2(n/3,0);
    vi dp3(n/3,0);
    if (calc(0,0) + calc(1,0) + calc(0,1) >= 2) dp2[0] = 1;
    if (calc(0,0) + calc(1,0) + calc(1,1) >= 2) dp3[0] = 1;
    for (int i = 1; i <= n/3; i++)
    {
        int x = 0;
        if (calc(0,3*i-3) + calc(0,3*i-2) + calc(0,3*i-1) >= 2) x++;
        if (calc(1,3*i-3) + calc(1,3*i-2) + calc(1,3*i-1) >= 2) x++;
        dp1[i] = max(dp1[i],x+dp1[i-1]);
        x = 0;
        if (calc(0,3*i-1) + calc(1,3*i-1) + calc(0,3*i-2) >= 2) x++;
        dp1[i] = max(dp1[i],x+dp3[i-1]);
        x = 0;
        if (calc(0,3*i-1) + calc(1,3*i-1) + calc(1,3*i-2) >= 2) x++;
        dp1[i] = max(dp1[i],x+dp2[i-1]);

        if (i < n/3) {
        x = 0;
        if (calc(0,3*i+1) + calc(0,3*i) + calc(0,3*i-1) >= 2) x++;
        if (calc(1,3*i) + calc(1,3*i-1) + calc(1,3*i-2) >= 2) x++;
        dp2[i] = max(dp2[i],dp2[i-1]+x);
        x = 0;
        if (calc(0,3*i) + calc(0,3*i+1) + calc(1,3*i) >= 2) x++;
        dp2[i] = max(dp2[i],dp1[i]+x);
        
        //
        x= 0;
        if (calc(1,3*i+1) + calc(1,3*i) + calc(1,3*i-1) >= 2) x++;
        if (calc(0,3*i) + calc(0,3*i-1) + calc(0,3*i-2) >= 2) x++;
        dp3[i] = max(dp3[i],dp3[i-1]+x);
        x = 0;
        if (calc(1,3*i) + calc(1,3*i+1) + calc(0,3*i) >= 2) x++;
        dp3[i] = max(dp3[i],dp1[i]+x);
        }
    }
    cout << dp1[n/3] << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}