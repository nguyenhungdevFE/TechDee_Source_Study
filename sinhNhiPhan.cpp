#include <bits/stdc++.h>

using namespace std;

void Try(int n, int x[])
{
    while (1)
    {
        for (int i = 1; i <= n; i++)
            cout << x[i] << " ";
        int j = n - 1, k = n;
        while(x[j] > x[j + 1] && j > 0) j--;
        if(j == 0) break;
        else{
            while(x[k] < x[j]) k--;
            swap(x[j], x[k]);
            int l = j + 1, r = n;
            while(l < r){
                swap(x[l], x[r]);
                l++;
                r--;
            }
        }
        cout << endl;
    }
}

int main()
{
    int n; cin >> n;
    int a[n + 5];
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
    Try(n, a);
    return 0;
}