#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int MOD = 998244353;
//
//
//

void solve() {
  int n;
  cin >> n;

  vector<int> first, second, both;
  int fi = 0, se = 0, bo = 0;

  for (int i = 0; i < n; i++) {
    int t, s;
    cin >> t >> s;
    if (t == 1) {
      first.push_back(s);
      fi++;
    } else if (t == 2) {
      second.push_back(s);
      se++;
    } else {
      both.push_back(s);
      bo++;
    }
  }

  sort(first.begin(), first.end(), greater<int>());
  sort(second.begin(), second.end(), greater<int>());
  




vector<int> pfirst(fi);
vector<int> pboth(bo);

vector<int> gen(fi + bo);

int i = 0, j = 0, k = 0;

bool POSIBLE = true;
int extra = 0;

while(k < fi + bo){
    if(i == fi or first[i] >= both[j]){
        gen[k] = both[j];
        pboth[j] = k;
        j++;
    }else{
        gen[k] = first[i];
        pfirst[i] = k;
        i++;
    }
    if(gen[k] <= k + 1){
        POSIBLE = false;
    }
    k++;
}

for(int l = bo-1; l >=0 ; l--){

}






sort(both.begin(), both.end(), greater<int>());


}
//
//
//
int main() {
  int tt = 1;
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}