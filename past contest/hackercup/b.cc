#include <bits/stdc++.h>
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
  cout.precision(7);
  int tt = 1;
  cin >> tt;
  vector<bool> prime(1e7,true);
  for (int i = 2; i < 1e7; i++)
  {
    if (prime[i]) {
        for (int j = 2; i*j < 1e7; j++)
        {
            prime[i*j] = false;
        }
    }
  }

  vi twin;
  for (int i = 5; i < 1e7; i++)
  {
    if (prime[i] and prime[i-2]) twin.push_back(i);
  }
  for (int i = 1; i <= tt; i++){
    int N;
    cin >> N;
    int sol = 0;
    if (N >= 5) sol++;
    for (int j = 0; j < twin.size(); j++)
    {
        if (twin[j] <= N) sol++;
    }
    cout << "Case #" << i << ": " << sol << endl;
  }
  
}