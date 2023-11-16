#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    cin.ignore();
    string s;
    getline(cin, s);
    ll n;
    cin >> n;
    ll sum = 0;
    while(n--){
        ll h;
        cin >> h;
        if(h < 0) sum += h;
    }
    if(sum <= -100000000) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}