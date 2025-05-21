#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;


void solve() {
    int n;
    while (cin >> n) {
    map<string,int> M;
    string s;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        M[s]++;
        sum++;
    }

    int g;
    cin >> g;
    for (int i = 0; i < g; i++)
    {
        cin >> s;
        if (2*M[s] < sum) {
            sum++;
            M[s]++;
        }
    }
    

    for (auto u : M)
    {
        if (u.second > 0) {
            cout << u.first << " " << u.second << endl;
        }
    }
     cout << "--------------------" << endl;
    }
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    solve();
  }
}