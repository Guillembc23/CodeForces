#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<ll>
#define vvi vector<vi>
#define pb push_back
 
typedef long long int ll;
const int MOD = 998244353;
//
//
//
 
void solve() {
  int n;
  cin >> n;
 
  vi a(n);
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
 
  ll result = sum;
  ll curr = sum;
 
  for (int i = 0; i < n-1; i++) {
    curr -= a[i];
    if (curr >= 0) result += curr;
  }
 
  cout << result << endl;
}
//
//
//
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
 
  int tt = 1;
  cin >> tt;
 
  for (int t = 0; t < tt; t++) {
    solve();
  }
}