#include <bits/stdc++.h>
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;


void solve(){
    int ngay, thang;
    cin >> ngay >> thang;
    if(thang == 1){
        if(ngay <= 19) cout << "Ma Ket\n";
        else cout << "Bao Binh\n";
    }
    if(thang == 2){
        if(ngay <= 18) cout << "Bao Binh\n";
        else cout << "Song Ngu\n";
    }
    if(thang == 3){
        if(ngay <= 20) cout <<"Song Ngu\n";
        else cout << "Bach Duong\n"; 
    }
    if(thang == 4){
        if(ngay <= 19) cout << "Bach Duong\n";
        else cout << "Kim Nguu\n";
    }
    if(thang == 5){
        if(ngay <= 20) cout << "Kim Nguu\n";
        else cout << "Song Tu\n";
    }
    if(thang == 6){
        if(ngay <= 20) cout << "Song Tu\n";
        else cout << "Cu Giai\n";
    }
    if(thang == 7){
        if(ngay <= 22) cout << "Cu Giai\n";
        else cout << "Su Tu\n";
    }
    if(thang == 8){
        if(ngay <= 22) cout << "Su Tu\n";
        else cout << "Xu Nu\n";
    }
    if(thang == 9){
        if(ngay <= 22) cout << "Xu Nu\n";
        else cout << "Thien Binh\n";
    }
    if(thang == 10){
        if(ngay <= 22) cout << "Thien Binh\n";
        else cout << "Thien Yet\n";
    }
    if(thang == 11){
        if(ngay <= 22) cout <<"Thien Yet\n";
        else cout << "Nhan Ma\n";
    }
    if(thang == 12){
        if(ngay <= 21) cout << "Nhan Ma\n";
        else cout << "Ma Ket\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}