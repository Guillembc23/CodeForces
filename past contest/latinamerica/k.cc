#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

const int INF = 1e10;


void solve() {
  int N, P, H;
  cin >> N >> P >> H;
  vi sum;
  vi mult;
  bool attack = false;
  int attacks = 0;

  int real_N = 0;
  for (int i = 0; i < N; i++)
  {
    char c;
    cin >> c;
    if (c == '!') {
        attack = true;
        attacks++;
    }
    else if( c == '+') {
        int x;
        cin >> x;
        sum.pb(x);
        real_N++;
    }else {
        int x;
        cin >> x;
        mult.pb(x);
        real_N++;
    }
  }

  if (not attack) {
    cout << "*" << endl;
    return;
  }




  vvi res(mult.size()+1, vi(sum.size()+1));

  sort(mult.begin(),mult.end());
  sort(sum.begin(),sum.end());

  reverse(mult.begin(),mult.end());
  reverse(sum.begin(),sum.end());

  int M = 1;
  for (int i = 0; i < mult.size(); i++)
  {
    if (M <= INF) {
        M *= mult[i];
    } else {
        M = INF;
    }
  }
  
  int S = 0;
  for (int i = 0; i < sum.size(); i++)
  {
    S += sum[i];
  }

  int acum = 0;

  if (P == 0 and S == 0){
    cout << "*" << endl;
    return;
  }

  if (P < H and S == 0 and M == 1) {
    int total = ceil(1.0*H/P);
    cout << total + (total/attacks)*(N-attacks) << endl;
    return;
  }

  if (M != INF) {
  while (1.0*(P +  S)*M*attacks < 1.0*H) {
    H -= (P +  S)*M*attacks;
    P = (P +  S)*M;
    acum += N;
  }
  }
  

  int mi = INF;

  res[0][0] = P;
  for (int k = 1; k <= attacks; k++)
    {
        if (P*k >= H) {
            mi = k;
        }
   }
  for (int i = 1; i <= sum.size(); i++)
  {
    res[0][i] = res[0][i-1] + sum[i-1];
    for (int k = 1; k <= attacks; k++)
    {
        if (res[0][i]*k >= H) {
            mi = min(mi, i+k);
        }
    }
  }

  for (int i = 1; i <= mult.size(); i++)
  {
    for (int j = 0; j <= sum.size(); j++)
        {
            res[i][j] = res[i-1][j]*mult[i-1];

            for (int k = 1; k <= attacks; k++)
                {
                    if (res[i][j]*k >= H) {
                        mi = min(mi, i+j+k);
                    }
                }

        }
  }

  if (mi == INF) {
    cout << "*" << endl;
  } else {
    cout << mi+acum << endl;
  }
  
  

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