#include <bits/stdc++.h>

using namespace std;

class sinhVien
{
public:
    string maSinhVien, hoVaTen, className, email;
    friend istream &operator>>(istream &is, sinhVien &sv)
    {
        getline(cin, sv.maSinhVien);
        getline(cin, sv.hoVaTen);
        getline(cin, sv.className);
        getline(cin, sv.email);
        return is;
    }
    friend ostream &operator<<(ostream &out, sinhVien &sv)
    {
        return out << sv.maSinhVien << " " << sv.hoVaTen << " " << sv.className << " " << sv.email << endl;
    }
};
bool compare(sinhVien &sv1, sinhVien &sv2)
{
    return sv1.maSinhVien < sv2.maSinhVien;
}
int main()
{
    sinhVien sv[1000], x;
    int n = 0;
    while (cin >> x)
    {
        sv[n++] = x;
    }
    sort(sv, sv + n, compare);
    for(int i = 0; i < n; i++){
        cout << sv[i];
    }
    return 0;
}