#include <bits/stdc++.h>
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

int main()
{
    fasten();
    string s;
    getline(cin, s);
    for(char& i : s){
        if(isalpha(i)){
            if(isupper(i)){
                if(i > 88) i -= 24;
                else i += 2;
            }
        else{
            if(i < 99) i+= 24;
            else i-= 2;
        }
        }
        cout << i;
    }
}