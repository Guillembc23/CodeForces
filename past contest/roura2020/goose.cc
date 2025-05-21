#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

int numb(char a) {
  if (a == '1') return 1;
  if (a == '2') return 2;
  if (a == '3') return 3;
  if (a == '4') return 4;
  if (a == '5') return 5;
  if (a == '6') return 6;
  if (a == '7') return 7;
  if (a == '8') return 8;
  if (a == '9')
    return 9;
  else
    return 0;
}

bool mayus(char a) { return int('A') <= int(a) and int(a) <= int('Z'); }

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cout.setf(ios::fixed);
  cout.precision(3);

  string s;
  while (cin >> s) {
    vector<double> dp(s.size(), 0);

    unordered_map<char, int> last;
    vi jumps(s.size(),0);

    for (int i = s.size() - 1; i >= 0; i--) {
      if (mayus(s[i])) {
        if (last[s[i]]) {
          jumps[i] = last[s[i]];
        }
        last[s[i]] = i;
      }
    }

    for (int i = s.size() - 1; i >= 0; i--) {
      for (int j = 1; j <= 6 and i + j < s.size(); j++) {
        if (mayus(s[i + j])) {
          if (jumps[i+j]) {
            dp[i] += dp[jumps[i+j]] - 1;
          } else {
            dp[i] += dp[i+j];
          }
        }else {
          dp[i] += dp[i+j];
        }
      }


      dp[i] /= 6;
      dp[i] += 1;
      if (numb(s[i])) dp[i] += numb(s[i]);
    }

    cout << dp[0] << endl;
  }
}