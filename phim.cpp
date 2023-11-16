#include <bits/stdc++.h>
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

struct phim
{
    string mp, t, k;
    int d, m, y, e, s;
};
int tt(string &s)
{
    int d = 0;
    for (char &i : s)
    {
        if (isdigit(i))
            (d *= 10) += (i - 48);
    }
    return d;
}
int cmp(phim &a, phim &b)
{
    if (a.y != b.y)
        return a.y < b.y;
    if (a.m != b.m)
        return a.m < b.m;
    if (a.d != b.d)
        return a.d < b.d;
    if (a.t != b.t)
        return a.t < b.t;
    return a.e > b.e;
}
int main()
{
    // fasten();
        int n, m;
        cin >> n >> m;
        string s[n];
        cin.ignore();
        for (string &i : s)
            getline(cin, i);
        phim a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i].mp;
            a[i].k = s[tt(a[i].mp) - 1];
            scanf("%d/%d/%d", &a[i].d, &a[i].m, &a[i].y);
            cin.ignore();
            getline(cin, a[i].t);
            cin >> a[i].e;
            a[i].s = i + 1;
        }
        sort(a, a + m, cmp);
        for (phim &i : a)
        {
            printf("P%03d ", i.s);
            cout << i.k << " ";
            printf("%02d/%02d/%0004d ", i.d, i.m, i.y);
            cout << i.t << " " << i.e << "\n";
        }
}