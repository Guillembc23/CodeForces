#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define vi vector<ll>
#define vvi vector<vi>
#define vs vector<string>

using namespace std;

void back(string s, vi &inf, vi &sup, vi &m, vi &sol) {
    ll p = stoll(s);
    for (int i = 0; i < inf.size(); i++)
    {
        if (inf[i] <= p and p <= sup[i] and p % m[i] == 0) sol[i]++;
    }
    
  if (s.size() > 14) {
    return;
  }
  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      if (s.size() == 1) {
        if (i < int(s[0]) - int('0') and int(s[0]) - int('0') > j) {
          string l = char(i + int('0')) + s + char(j + int('0'));

          back(l,inf,sup,m,sol);
        }
      } else if (i <= int(s[0]) - int('0') and int(s.back()) - int('0') >= j) {
        string l = char(i + int('0')) + s + char(j + int('0'));
        back(l, inf,sup,m,sol);
      }
    }
  }
}

signed main() {
  // ios_base::sync_with_stdio(0);
  // cin.tie(0);
  int tt;
  cin >> tt;
  vi sol(tt,0);
  vi inf(tt);
  vi sup(tt);
  vi m(tt);
  for (int i = 0; i < tt; i++)
  {
    cin >> inf[i] >> sup[i] >> m[i];
  }
  

  back("1",inf,sup,m,sol);
  back("2", inf,sup,m,sol);
  back("3", inf,sup,m,sol);
  back("4", inf,sup,m,sol);
  back("5", inf,sup,m,sol);
  back("6", inf,sup,m,sol);
  back("7", inf,sup,m,sol);
  back("8", inf,sup,m,sol);
  back("9", inf,sup,m,sol);

  for (int i = 0; i < tt; i++)
  {
    cout << "Case #" << i+1 << ": " << sol[i] << endl;
  }
  
  
  
}