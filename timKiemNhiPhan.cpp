#include <bits/stdc++.h>
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;
void nhap(int n, int a[]){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
} 

void xuat(int n, int a[]){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}

int isPrime(int n) {
    int sqr = sqrt(n);
    for (int i = 2; i <= sqr; i++)
        if (n % i == 0) {
            return false;
        }
    return n > 1;
}



int main()
{
    fasten();
    
    return 0;
}