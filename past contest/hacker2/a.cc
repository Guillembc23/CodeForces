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
  int tt;
  cin >> tt;
  vi peak = {1,2,3,4,5,6,7,8,9,121,232,343,454,565,676,787,898,12321,23432,34543,45654,56765,67876,78987,1234321,2345432,3456543,4567654,5678765,6789876,123454321,234565432,345676543,456787654,567898765,12345654321,23456765432,34567876543,45678987654,1234567654321,2345678765432,3456789876543,12345678987654321};
  
  
  for (int i = 1; i <= tt; i++)
  {
    int a, b ,m;
    cin >> a >> b >> m;
    int sol = 0;
    for (int j = 0; j < peak.size(); j++)
    {
        if (a <= peak[j] and peak[j] <= b and peak[j]%m == 0) sol++;
    }
    cout << "Case #" << i << ": " << sol << endl;
  }
  
}