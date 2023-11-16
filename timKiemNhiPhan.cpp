#include <bits/stdc++.h>
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;

int binarySearch(int a[], int n, int k)
{
    int l, r;
    l = 0;
    r = n - 1;
    do
    {
        int mid = (l + r) / 2;
        if (a[mid] == k)
            return k;
        else if (a[mid] < k)
            l = mid + 1;
        else
            r = mid - 1;
    } while (l <= r);
    return 0;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (binarySearch(a, n, k))
        cout << "1\n";
    else
        cout << "-1\n";
}

int main()
{
    fasten();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}