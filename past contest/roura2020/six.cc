#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;



signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cout.setf(ios::fixed);
  cout.precision(4);

  int n;
  while (cin >> n) {
    unordered_map<string,int> M;
    int nn = n;
    while(n--) {
        string s;
        cin >> s;
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            string l;
            cin >> l;
            if (i < 5 and l != s) {
                M[l]++;
            }
        }
    }
    cout << nn-M.size() << endl;
  }
}