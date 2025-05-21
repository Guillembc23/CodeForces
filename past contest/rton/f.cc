#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>

typedef long long int ll;
const int MOD = 998244353;
const string sx = "(())";
const string sy = "()()";
const string sz = "()";
//
//
//
void print1(vector<bool> s, int r, int n) {
  if(n > 1){
  if (r%2 == 1) cout << "(";
  if(r > 1) cout << sz;
  for (int i = r; i < 2*(n-1) - 1; i += 4)
  {
    if (s[i]) cout << sx;
    else cout << sy;
  }
  if((2*n-r)%4 > 1) cout << sz;
  if (r%2 == 1) cout << ")";
  cout << endl;
  }
  else {
    cout << sz << endl;
  }
}

void solve() {
  int n;
  cin >> n;

  vector<bool> s(2*(n-1),false);
  int sum = 0;

  string k;
  cin >> k;

  for (int i = 0; i < 2*(n-1); i++)
  {
    if (k[i+1] == '1') sum = sum^1;
    if (sum == 1) s[i] = true;
  }
  
  if(sum == 1 or k[0] != k[2*n - 1]) {
    cout << -1 << endl;
  } else {
    if (k[0] == '1') {
      cout << 5 << endl;
      cout << "(";
      for (int i = 0; i < n-1; i++)
      {
        cout << sz;
      }
      cout << ")" << endl;
    }else {
      cout << 4 << endl;
    }
    print1(s,0,n);
    print1(s,1,n);
    print1(s,2,n);
    print1(s,3,n);
  }

  
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