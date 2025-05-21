#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

typedef long long int ll;
const int MOD = 998244353;
//
//
//
void process(string s1, string s2, vi &sticky){
    int i = 0, j = 0;
    int l = s2.size();
    while(j < l) {
        if (s1[i] == s2[j]) {
            i++;
            j++;
        }else {
            if (sticky[int(s2[j])-int('a')] == 0) {
                sticky[int(s2[j])-int('a')] = 1;
                cout << s2[j];
            }
            j++;
        }
    }
}

void solve() {
  vector<string> s;
  vi sticky(int('z') - int('a') + 1, 0);
  string h;
  while (cin >> h) {
    s.pb(h);
  }
  int n = s.size()/2;

  for (int i = 0; i < n; i++)
  {
    process(s[i],s[i+n],sticky);
  }

  cout << endl;
}
//
//
//

int main() {

  int tt = 1;
  //cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}