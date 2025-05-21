#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

bool play(set<pair<int,int>> &current,vi & q1, vi & q2, vi & q3, vi & q4){
    
    for (auto u : current) {
        int v = u.second;
        int in = u.first;
        if (v == q1.back()-10) {
            current.erase(u);
            q1.pb(v);
            return false;
        }
        if (v == q2.back()-10) {
            current.erase(u);
            q2.pb(v);
            return false;
        }
        if (v == q3.back()+10) {
            current.erase(u);
            q3.pb(v);
            return false;
        }
        if (v == q4.back()+10) {
            current.erase(u);
            q4.pb(v);
            return false;
        }
    }
    pair<int,int> best = {-1,-1};
    int dif = 1e9;
    int pila = -1;

    for (auto u : current) {
        int v = u.second;
        int in = u.first;
        if (v > q1.back() and v - q1.back() < dif) {
            best = u;
            pila  = 1;
            dif = v - q1.back();
        }
        if (v > q2.back() and v - q2.back() < dif) {
            best = u;
            pila  = 2;
            dif = v - q2.back();
        }
        if (v < q3.back() and q3.back() - v < dif) {
            best = u;
            pila  = 3;
            dif = q3.back() - v;
        }
        if (v < q4.back() and q4.back() - v < dif) {
            best = u;
            pila  = 4;
            dif = q4.back() - v;
        }
    }
    if (pila != -1) {
    if (pila == 1) q1.pb(best.second);
    if (pila == 2) q2.pb(best.second);
    if (pila == 3) q3.pb(best.second);
    if (pila == 4) q4.pb(best.second);
    current.erase(best);
    return false;
    } else {
        return true;
    }

} 

void print (vi &a) {
    bool first = true;
    for (int i = 0; i < a.size(); i++)
    {
        if (first) first = false;
        else cout << " ";
        cout << a[i];
    }
    cout << endl;
}

void prints (set<pair<int,int>> &S) {
    bool first = true;
    for (auto p : S) {
        if (first) first = false;
        else cout << " ";
        cout << p.second;
    }
    cout << endl;
}

void printq (queue<pair<int,int>> &Q) {
    bool first = true;
    while (not Q.empty()) {
        if (first) first = false;
        else cout << " ";
        cout << Q.front().second;
        Q.pop();
    }
    cout << endl;
}


void solve() {
    queue<pair<int,int>> Q;
    for (int i = 0; i < 98; i++)
    {
        int a;
        cin >> a;
        Q.push({i,a});
    }
    set<pair<int,int>> current;
    for (int i = 0; i < 8; i++)
    {
        current.insert(Q.front());
        Q.pop();
    }

    vi q1, q2, q3, q4;
    q1.pb(1);
    q2.pb(1);
    q3.pb(100);
    q4.pb(100);
    int k;
    for (int i = 0; i < 50; i++)
    {
        if (play(current,q1,q2,q3,q4)) break; 
        if (play(current,q1,q2,q3,q4)) break; 
        if (not Q.empty()) {
        current.insert(Q.front());
        Q.pop();
        current.insert(Q.front());
        Q.pop();
        }
    }
    print(q1);
    print(q2);
    print(q3);
    print(q4);
    
    prints(current);printq(Q);
}

signed main() {
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    solve();
  }
}