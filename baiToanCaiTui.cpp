#include<bits/stdc++.h>

using namespace std;
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);


int main(){
    fasten();
    int n, s; cin >> n >> s;
    int w[n + 1], v[n + 1];
    for(int i = 1; i <= n; i++)  cin >> v[i];
    for(int i = 1; i <= n; i++)  cin >> w[i];
    int dp[n + 1][s + 1];
    memset(dp, 0,sizeof(dp));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= s; j++){
            // khong lua chon do vat thu i vao trong tui
            dp[i][j] = dp[i - 1][j];
            // lua chon do vat thu i vao trong tui
            if(j >= w[i]){
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << dp[n][s] << endl;
    return 0;
}