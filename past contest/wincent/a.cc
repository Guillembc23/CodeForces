#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

// let's make the code O(N^2)

pair<int,int> result (pair<int,int> a, pair<int,int> b) { // returns direction of a facing to b, and manhattan distance
int x = b.first - a.first;
int y = b.second - a.second;
int dis = abs(x) + abs(y);
if (x == 0 and y > 0) return {0,dis};
else if (x == 0 and y < 0) return {4,dis};
else if (x + y == 0 and y > 0) return {7,dis};
else if (x + y == 0 and y < 0) return {3,dis};
else if (y == 0 and x < 0) return {6,dis};
else if (y == 0 and x > 0) return {2,dis};
else if (x == y and y < 0) return {5,dis};
else if (x == y and y > 0) return {1,dis};
else return {-1,-1};
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    vector<bool> alive(n,true);
    string direction;
    cin >> direction;
    
    map<string,int> dir;
    dir["N"] = 4;
    dir["NW"] = 3;
    dir["W"] = 2;
    dir["SW"] = 1;
    dir["S"] = 0;
    dir["SE"] = 7;
    dir["E"] = 6;
    dir["NE"] = 5;

    int curr_dir = dir[direction];
    curr_dir = (curr_dir+4+1)%8;
    int curr_player;
    cin >> curr_player;
    curr_player--;
    alive[curr_player] = false;
    int count = 0;

    while (true) {
        int best_player = -1;
        int best_dir_diference = -1;
        int best_distance = -1;
        for (int i = 0; i < n; i++)
        {
            if (alive[i]) {
                pair<int,int> p = result(a[curr_player],a[i]);
                if (p.first != -1) {
                    int dir_diference = (p.first-curr_dir+8)%8;
                    int distance = p.second;
                    bool better = false;
                    if (best_dir_diference == -1 or best_dir_diference > dir_diference) {
                        better = true;
                    } else if (best_dir_diference == dir_diference and best_distance > distance) {
                        better = true;
                    }
                    if (better) {
                        best_player = i;
                        best_dir_diference = dir_diference;
                        best_distance = distance;
                    }
                }
            }
        }
        if (best_player != -1) {
            count++;
            //for debugging
            //cout << best_player+1 << endl;
            alive[best_player] = false;
            curr_player = best_player;
            curr_dir = (curr_dir + best_dir_diference + 4 + 1)%8;
        } else {
            break;
        }
    }
    cout << count << " " << curr_player+1 << endl;
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
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}