#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;


void solve() {
    int a, b, n;
    cin >> a >> b >> n;
    string s(n,'.');
    int c = 0;
    int d = 0;
    int many = 0;
    for (int i = 0; i < n; i++)
    {
        c++;
        if (c >= a) {
            many++;
            c = 0;
            for (int j = i; j >= 0; j--)
            {
                if (s[j] == '.') {
                    s[j] = 'A';
                    break;
                }
                c++;
            }
        }
        d++;
        if (d >= b) {
            many++;
            d = 0;
            for (int j = i; j >= 0; j--)
            {
                if (s[j] == '.') {
                    s[j] = 'B';
                    break;
                }
                d++;
            }
        }
    }
    cout << s << endl;
    cout << many << endl;
}

signed main() {
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    solve();
  }
}