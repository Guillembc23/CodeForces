#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

vector<string> nums = {
"GGGgGGG",
"gggggGG",
"gGGGGGg",
"ggGGGGG",
"GggGgGG",
"GgGGGgG",
"GGGGGgG",
"ggGggGG",
"GGGGGGG",
"GgGGGGG" };

bool check (int a, string s) {
  string q = nums[a];
  for (int i = 0; i < 10; i++)
  {
    if ((s[i] == 'G' and q[i] == 'g') or (s[i] == 'g' and q[i] == 'G')) {
    return false;}
  }
  return true;
}


void solve() {
  int N;
  cin >> N;
  string sol;
  for (int i = 0; i < N; i++)
  {
    string s;
    cin >> s;
    int p = -1;
    int count = 0;
    for (int j = 0; j < 10; j++)
    {
      if (check(j,s)) {
        p = j;
        count++;
      }
    }
    if (count != 1) {
      sol += "*";
    } else {
      sol += char(p + int('0'));
    }
  }

  cout << sol << endl;
  


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
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}