#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define si set<int>
#define pb push_back
const int MOD = 998244353;
//
//
//
void column (char a, char b){
    for (int i = 0; i < 8; i++)
    {
     if (int (b)- int('1')  != i ) {
        cout << a << char(i+int('1')) << endl;
     }
    }
}

void row (char a, char b){
    for (int i = 0; i < 8; i++)
    {
     if (int (a) - int ('a') != i ) {
        cout << char (i + int('a')) << b << endl;
     }
    }
}

void solve() {
    string s;
    cin >> s;
    column(s[0],s[1]);
    row(s[0],s[1]);
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