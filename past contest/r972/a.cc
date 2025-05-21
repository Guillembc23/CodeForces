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

    map<char,int> curr;
    map<char,int> maxx;
    int lc;
    for (int i = n-1; i >= 0; i--)
    {
        lc = 'n';
        int nn = -s[i].size();
        for (int j = 0; j < s[i].size(); j++)
        {
            if (suc[lc] == s[i][j]){ lc = suc[lc];
            if (lc == 'k') nn += 10;}
        }
        curr['n'] = max(nn+maxx[lc],maxx['n']);

        lc = 'a';
        int aa = -s[i].size();
        for (int j = 0; j < s[i].size(); j++)
        {
            if (suc[lc] == s[i][j]){ lc = suc[lc];
            if (lc == 'k') aa += 10;}
        }
        curr['a'] = max(aa+maxx[lc],maxx['a']);

        lc = 'r';
        int rr = -s[i].size();
        for (int j = 0; j < s[i].size(); j++)
        {
            if (suc[lc] == s[i][j]) {lc = suc[lc];
            if (lc == 'k') rr += 10;}
        }
        curr['r'] = max(rr+maxx[lc],maxx['r']);

        lc = 'e';
        int ee = -s[i].size();
        for (int j = 0; j < s[i].size(); j++)
        {
            if (suc[lc] == s[i][j]) { lc = suc[lc];
            if (lc == 'k') ee += 10;}
        }
        curr['e'] = max(ee+maxx[lc],maxx['e']);
   
        lc = 'k';
        int kk = -s[i].size();
        for (int j = 0; j < s[i].size(); j++)
        {
            if (suc[lc] == s[i][j]) {lc = suc[lc];
            if (lc == 'k') kk += 10;}
        }
        curr['k'] = max(kk+maxx[lc],maxx['k']);
     

        maxx['n'] = max(maxx['n'],curr['n']);
        maxx['a'] = max(maxx['a'],curr['a']);
        maxx['r'] = max(maxx['r'],curr['r']);
        maxx['e'] = max(maxx['e'],curr['e']);
        maxx['k'] = max(maxx['k'],curr['k']);
    }
    cout << maxx['k'] << endl;
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