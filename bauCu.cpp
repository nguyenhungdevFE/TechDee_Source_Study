#include <bits/stdc++.h>
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    fasten();
    int T = 1;
    while(T--){
        int n,m;
        cin >> n >> m;
        unordered_map<int,int> mp;
        unordered_set<int> s;
        int a[n];
        for(int &i : a){
            cin >> i;
            ++mp[i];
        }
        for(auto& i : mp) s.insert(i.second);
        if(s.size() == 1) cout << "NONE";
        else{
            vector<int> v;
            int d = 0, d1 = 0;
            for(auto &i : s){
                v.emplace_back(i);
                d = max(i,d);
            }
            for(int &i : v){
                if(i < d) d1 = max(i, d1);
            }
            for(int&i : a){
                if(mp[i] == d1){
                    cout << i;
                    break;
                }
            }
         }
    }
}