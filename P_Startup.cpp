#include <bits/stdc++.h>
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int cmp(pair<long long, long long> p1, pair<long long, long long> p2){
    if(p2.first != p1.first) return p1.first > p2.first;
    return p1.second < p2.second;
}
int compare(pair<long long, long long> p1, pair<long long, long long> p2){
    return p1.second < p2.second;
}
int main()
{
    fasten();
    int T = 1;
    while(T--){
        int T = 1;
        while(T--){
            int n; cin >> n;
            pair<long long,long long> p[n];
            for(int i = 0; i < n; i++){
                long long m, s, t;
                cin >> m >> s >> t;
                p[i].first = s * 0.7 + t * 0.3;
                p[i].second = m;
            }
        sort(p, p + n, cmp);
        sort(p, p + 7, compare);
        for(int i = 0; i < 7; i++){
            cout << p[i].second << " ";
        }
        }
    }
}