#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

void solve(int k) {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<int> S;
    for (int i = 0; i < k; i++)
    {
        if (S.find(a[i]) != S.end()) {
            cout << "yes" << endl;
            return;
        }
        S.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        
        if (S.find(a[(i+k)%n]) != S.end()) {
            cout << "yes" << endl;
            return;
        }
        S.erase(a[i]);
        S.insert(a[(i+k)%n]);
    }
    
    cout <<  "no" << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(0);
  int tt = 1;
  // cin >> tt;
  int n;
  while (cin >> n) {
    solve(n);
  }
}