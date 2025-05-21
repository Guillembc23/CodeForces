#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

bool valid (char a) {
    if (a == 'n' or a == 'a' or a == 'r' or a == 'e' or a == 'k') {
        return true;
    } else {
        return false;
    }
}


void solve () {
    map<char,char> suc;
    suc['n'] = 'a'; 
    suc['a'] = 'r'; 
    suc['r'] = 'e'; 
    suc['e'] = 'k'; 
    suc['k'] = 'n'; 

    int n, m;
    cin >> n >> m;
    vector<string> s(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (valid(c)) {
                s[i] += c;
            }
        }
    }

    vi nn(n,0), aa(n,0), rr(n,0), ee(n,0), kk(n,0);
    for (int i = 0; i < n; i++)
    {
        nn[i] = aa[i] = rr[i] = ee[i] = kk[i] = -s[i].size();
    }
    
    for (int i = 0; i < n; i++)
    {
        char lc = 'k';
        for (int j = 0; j < s[i].size(); j++)
        {
            if (suc[lc] == s[i][j]) {
                lc = suc[lc];
                if (lc == 'k') nn[i] += 10;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        char lc = 'n';
        for (int j = 0; j < s[i].size(); j++)
        {
            if (suc[lc] == s[i][j]) {
                lc = suc[lc];
                if (lc == 'k') aa[i] += 10;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        char lc = 'a';
        for (int j = 0; j < s[i].size(); j++)
        {
            if (suc[lc] == s[i][j]) {
                lc = suc[lc];
                if (lc == 'k') rr[i] += 10;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        char lc = 'r';
        for (int j = 0; j < s[i].size(); j++)
        {
            if (suc[lc] == s[i][j]) {
                lc = suc[lc];
                if (lc == 'k') ee[i] += 10;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        char lc = 'e';
        for (int j = 0; j < s[i].size(); j++)
        {
            if (suc[lc] == s[i][j]) {
                lc = suc[lc];
                if (lc == 'k') kk[i] += 10;
            }
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