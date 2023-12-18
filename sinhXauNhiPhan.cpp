#include <bits/stdc++.h>
using namespace std;
int n, a[100];
int main()
{
    int n;
    cin >> n;
    int x[n + 1];
    memset(x, 0, sizeof(x));
    while (1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << x[i] << " ";
        }
        int i = n;
        while (x[i] == 1)
        {
            x[i] = 1 - x[i];
            i--;
        }
        if (i == 0)
            break;
        else
            x[i] = 1 - x[i];
            cout << endl;
    }
    return 0;
}