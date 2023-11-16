#include <bits/stdc++.h>
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

string Mua(int nam, string khuVuc, int ngay)
{
    if (khuVuc == "Bac")
    {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
        {
            if (ngay <= 31)
                return "Dong";
            else if (ngay <= 121)
                return "Xuan";
            else if (ngay <= 213)
                return "He";
            else if (ngay <= 305)
                return "Thu";
            else
                return "Dong";
        }
        else
        {
            if (ngay <= 31)
                return "Dong";
            else if (ngay <= 120)
                return "Xuan";
            else if (ngay <= 212)
                return "He";
            else if (ngay <= 304)
                return "Thu";
            else
                return "Dong";
        }
    }
    else
    {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
        {
            if (ngay <= 121)
                return "Kho";
            else if (ngay <= 305)
                return "Mua";
            else
                return "Kho";
        }
        else
        {
            if (ngay <= 120)
                return "Kho";
            else if (ngay <= 304)
                return "Mua";
            else
                return "Kho";
        }
    }
}

int main()
{
    fasten();
    int n;
    cin >> n;
    while (n--)
    {
        cin.ignore();
        string khuVuc;
        getline(cin, khuVuc);
        int nam, ngay;
        cin >> nam >> ngay;
        cout << Mua(nam, khuVuc, ngay) << endl;
    }
}