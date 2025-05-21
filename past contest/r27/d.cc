#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
 
const int MOD = 1e9+7;
 
int decompose (int a) {
    while (a % 2 == 0) {
        a /= 2;
    }
    return a;
}
 
int posmod(int a) {
    a = a % MOD;
    if (a < 0) a += MOD;
    return a;
}
 
void solve() {
    int n;
    cin >> n;
    vector<pair<int,pair<double,int>>> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = {-decompose(x),{x,x}};
    }
    int curr = 0;
    stack<pair<int,pair<double,int>>> Q;
    for (int i = 0; i < n; i++)
    {
        while (not Q.empty() and -Q.top().first <= a[i].second.first) {
            double b = Q.top().second.first;
            int bmod = Q.top().second.second;
            int c = - Q.top().first;
            Q.pop();
            curr -= bmod;
            while (b > c) {
                b /= 2;
                a[i].second.first *= 2;
                a[i].second.second *= 2;
                a[i].second.second %= MOD;
            }
            curr += c;
        }
        curr += a[i].second.second;
        curr = posmod(curr);
        int aux = a[i].second.first;
        if (aux % 2 == 0) Q.push(a[i]);
        if (i > 0) cout << " ";
        cout << curr;
    }
    cout << endl;
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