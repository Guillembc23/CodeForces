#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int> M;
    for (int i = 0; i < s.size(); i++)
    {
        M[s[i]]++;
    }

    vector<pair<int,char>> v;
    for (auto u : M) {
        v.push_back({u.second,u.first});
    }
    sort(v.begin(),v.end());
    int j = 0;
    for (int i = v.size()-1; i >=0 ; i--)
    {
      while(v[i].first--) {
        s[j] = v[i].second;
        j += 2;
        if (j >= s.size()) {
          j++;
          j %= 2;
        }
      }
    }

    cout << s << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}