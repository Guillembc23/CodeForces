#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

void upupdate (vector<pair<int,int>> &seg, int pos) {
    //cout << "update" << pos << endl;
    if (pos > 0) {
        seg[pos].first = max(seg[2*pos].first+seg[2*pos].second, seg[2*pos+1].first+seg[2*pos+1].second);
        upupdate(seg,pos/2);
    }
}

void modify ( vector<pair<int,int>> &seg, int l, int r, int k) {
    //cout << "modify" << l << "to" << r << endl;
    if (l < r) {
    if (l % 2 == 1) {
        seg[l].second += k;
        upupdate(seg,l/2);
        l++;
    }
    if (r % 2 == 0) {
        seg[r].second += k;
        upupdate(seg,r/2);
        r--;
    }
    modify(seg,l/2,r/2,k);
    } else if (l == r) {
        seg[l].second += k;
        upupdate(seg,l/2);
    }
}

void solve(int n) {
    unordered_map<string,pair<int,int>> M;
    unordered_map<string,bool> loc;
    vi a;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        loc[s] = false;
        cin >> M[s].first >> M[s].second;
        a.push_back(M[s].first);
        a.push_back(M[s].second);
    }
    sort(a.begin(),a.end());
    unordered_map<int,int> aux;
    int pos = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (i == n-1 or a[i] != a[i+1]) {
            aux[a[i]] = pos;
            pos++;
        }
    }
    for (auto u : M)
    {
        M[u.first] = {aux[u.second.first],aux[u.second.second]};
    }
    
    vector<pair<int,int>> seg(4*(n+1),{0,0});
    string op;
    while (cin >> op and op != "END") {
        if (not loc[op]) {
            modify(seg,M[op].first+2*(n+1),M[op].second+2*(n+1),1);
        } else {
            modify(seg,M[op].first+2*(n+1),M[op].second+2*(n+1),-1);
        }
        loc[op] = !loc[op];
        cout << seg[1].first + seg[1].second << endl;
    }
    cout << "----------" << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(0);
  int tt = 1;
  // cin >> tt;
  int n;
  while (cin >> n) {
    solve(n);
  }
}