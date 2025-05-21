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
    if (n == 5) {
            cout << 5 << endl;
            cout << "2 1 3 4 5" << endl; 
            return;
    }
    // n == 2,4,1,3 ojo
    vi a;
    a.pb(5);    
    set<int> S;
    S.insert(5);
    S.insert(1);
    int k = 2;
    while (n >= k) {
        a.pb(k-1);
        a.pb(k);
        S.insert(k);
        S.insert(k-1);
        k *= 2;
    }
    if (n % 2 == 0) {
        cout << k-1 << endl;
        bool first = true;
        for (int i = 1; i <= n; i++)
        {
            if (S.find(i) == S.end()) {
                if (first) first = false;
                else cout << " ";
                cout << i;
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (first) first = false;
            else cout << " ";
            cout << a[i];
        }
        cout << endl;
    } else {
        cout << n << endl;
        bool first = true;
        for (int i = 1; i < n; i++)
        {
            if (S.find(i) == S.end()) {
                if (first) first = false;
                else cout << " ";
                cout << i;
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (first) first = false;
            else cout << " ";
            cout << a[i];
        }
        if (first) first = false;
        else cout << " ";
        cout << n;
        cout << endl;
    }
    
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