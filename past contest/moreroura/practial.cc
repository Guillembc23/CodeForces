#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;



signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  while(cin >> n) {
    vi divs;
    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0) {
            divs.pb(i);
            if (i*i != n) {
                divs.pb(n/i);
            }
        }
    }
    sort(divs.begin(),divs.end());
    int sum = 0;
    bool pos = true;
    for (int i = 0; i < divs.size() and pos; i++)
    {
        if (sum < divs[i]-1) pos = false;
        sum += divs[i];
    }
    if (pos) cout << "yes" << endl;
    else cout << "no" << endl;
    
  }
}