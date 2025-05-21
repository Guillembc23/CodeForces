#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

void print (stack<pair<int,int>> S) {
    while (not S.empty()) {
        cout << S.top().first<< " " << S.top().second << endl;
        S.pop();
    }
}

void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  int day = 0;
  stack<pair<int, int>> S;
  int sat = 0;
  for (int i = 0; i < n; i++) {
    int d, a;
    cin >> d >> a;
    while (not S.empty() and S.top().first + k > day ) {
        int pdays = min(d - day, day - S.top().first)
    }
    S.push({d, a});
  }


}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}