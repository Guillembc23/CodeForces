#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back



void solve() {
    int N;
    cin >> N;
    vvi a(N, vi(3));
    priority_queue<pair<int,pair<int,int>>> Q;
    priority_queue<pair<int,pair<int,int>>> ones;
    priority_queue<pair<int,pair<int,int>>> twos;
    for (int i = 0; i < N; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a[i][0] = 6*x;
        a[i][1] = 6*(y-x);
        a[i][2] = 6*(z-y);
        int m2 = (a[i][0] + a[i][1])/2;
        ones.push({-a[i][0], {1,i}});
        twos.push({-m2,{1,i}});


        int m3 = (a[i][0] + a[i][1] + a[i][2])/3;
        int mm2 = (a[i][1] + a[i][2])/2;

        if (m3 < m2 and m3 < a[i][0]) {
          Q.push({-m3,{-3,i}});
        } 
        else if(m2 < a[i][0]) {
          Q.push({-m2,{-2,i}});
          Q.push({-a[i][2],{-1,i}});
        } else {
          Q.push({-a[i][0],{-1,i}});

          if (mm2 < a[i][1]) {
            Q.push({-mm2,{-2,i}});
          }
          else{
            Q.push({-a[i][1],{-1,i}});
            Q.push({-a[i][2],{-1,i}});
          }
        }
    }

    vi useds(N,0);


    int curr = 0;
    vi sols(3*N, -6);
    int curr_cost = 0;

    int lcurr = -1;
    int lcurr_cost = -1;

    for (int i = 1; i <= 3*N; i++)
    {
      int val = -Q.top().first;
      int num = -Q.top().second.first;
      int index = Q.top().second.second;

      if (curr + num == i) {
        Q.pop();
        useds[index] += num;
        if (useds[index] == 1) {
          int mm2 = (a[index][1] + a[index][2])/2;
          twos.push({-mm2,{2,index}});
          ones.push({-a[index][1],{2,index}});
        }
        if (useds[index] == 2) {
          ones.push({-a[index][2],{3,index}});
        }
        lcurr = curr;
        lcurr_cost = curr;
        curr_cost += num*val;
        curr += num;
        sols[i-1] = curr_cost;
      } 

      if (curr + 1 == i) {
        while (useds[ones.top().second.second] >= ones.top().second.first) {
          ones.pop();
        }
        sols[i-1] = curr_cost  -ones.top().first;
      }

      if (curr + 2 == i) {

        while (useds[ones.top().second.second] >= ones.top().second.first) {
          ones.pop();
        }

        auto fi = ones.top();
        ones.pop();

        while (useds[ones.top().second.second] >= ones.top().second.first) {
          ones.pop();
        }

        auto se = ones.top();
        ones.push(fi);



        while (useds[twos.top().second.second] >= twos.top().second.first) {
          twos.pop();
        }

        sols[i-1] = curr_cost + min(-twos.top().first*2,-fi.first -se.first);
      }
    }
    
    for (int i = 0; i < sols.size(); i++)
    {
      cout << sols[i]/6 << endl;
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