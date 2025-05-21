#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

void solve () {
    int n;
    cin >> n;
    vvi a(n);
    for (int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    vector<char> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<bool> leaf(n,false);
    for (int i = 1; i < n; i++)
    {
        if (a[i].size() == 1) leaf[i] = true;
    }
    int zeros = 0, ones = 0, ints = 0, uni = 0;

    for (int i = 1; i < n; i++)
    {
        if (leaf[i]) {
            if (b[i] == '0') zeros++;
            else if (b[i] == '1') ones++;
            else ints++;
        } else {
            if (b[i] == '?') uni++;
        }
    }

    //cout << b[0] << endl;
    //cout << zeros << " " << ones << " " << ints << endl;

    if (b[0] != '?') {
        if (b[0] == '1') swap(ones,zeros);
        cout << ones + (ints - ints/2) << endl;
    } else {
        if (zeros == ones ) {
            if (uni % 2 == 0) {
            cout << zeros + ints/2 << endl;
            } else {
                cout << zeros + ints - ints/2 << endl;
            }
        } else {
        cout << max(zeros,ones) + ints/2 << endl;
        }
    }
}

signed main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}