#include<bits/stdc++.h>

using namespace std;

int n, a[100], check[100] = {0};

void out(){
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
}

void Try(int i){
    for(int j = 1; j <= n; j++){
        if(check[j] == 0){
            check[j] = 1;
            a[i] = j;
            if(i == n) out();
            else Try(i + 1);
            check[j] = 0;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);
    }
    return 0;
}