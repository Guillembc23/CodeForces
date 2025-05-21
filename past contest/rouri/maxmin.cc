#include <bits/stdc++.h>

using namespace std;


long long maxmin(const vector<long long>& V) {
    long long i = 0;
    long long j = V.size()-1;
    long long best = 0;
    while (i < j) {
        best = max(best,(j-i)*min(V[j],V[i]));
        if (V[i] < V[j]) i++;
        else j--;
    }
    return best;
}