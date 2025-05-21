#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;

signed main () {
    int n;
    cin >> n;
    vb a(n+1,true);
    int x;
    for (int i = 0; i < n-1; i++)
    {
        cin >> x;
        a[x] = false;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i]) cout << i << endl;
    }
}