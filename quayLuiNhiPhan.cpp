#include<bits/stdc++.h>
using namespace std;

int n, a[100];
void out(){
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
    cout << endl;
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n) out();
        else Try(i + 1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n; Try(1);
    }
    return 0;
}