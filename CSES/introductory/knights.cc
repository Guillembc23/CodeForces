#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;

int ways(int n) {
    return n*(n-1)/2;
}

signed main () {
    int n;
    cin >> n;
    vi att(n+1);
    att[1] = 0;
    if(n > 1) att[2] = 0;
    for (int i = 3; i <= n; i++)
    {
        att[i] = att[i-1] + 4*(i-1) + 4*(i-2) - 4;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i > 1) cout << " ";
        cout << ways(i*i) - att[i];
    }
    cout << endl;
}