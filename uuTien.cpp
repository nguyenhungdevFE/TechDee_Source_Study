#include <bits/stdc++.h>
using namespace std;

struct thiSinh
{
    string name;
    double diemThi;
    string danToc;
    int khuVuc;
    int SBD;
};

void nhap(thiSinh &ts)
{
    cin.ignore();
    getline(cin, ts.name);
    cin >> ts.diemThi;
    cin.ignore();
    getline(cin, ts.danToc);
    cin >> ts.khuVuc;
}

void congDiem(thiSinh &ts)
{
    if (ts.khuVuc == 1) ts.diemThi = ts.diemThi + 1.5;
    if (ts.khuVuc == 2) ts.diemThi = ts.diemThi + 1;
    if (ts.danToc != "Kinh") ts.diemThi = ts.diemThi + 1.5;
}
void chuanHoa(thiSinh &ts)
{
    for (int i = 0; i < ts.name.size(); i++)
    {
        ts.name[i] = tolower(ts.name[i]);
    }
    stringstream ss(ts.name);
    string word;
    ts.name = "";
    while (ss >> word)
    {
        word[0] = toupper(word[0]);
        ts.name += word + " ";
    }
}
void in(int t, thiSinh &ts){
    string soThuTu = (t < 10) ? "TS0" + to_string(ts.SBD) : "TS" + to_string(ts.SBD);
    string trangThai = (ts.diemThi >= 20.5) ? "Do" : "Truot";
    cout << soThuTu << " " << ts.name << ts.diemThi << " " << trangThai << endl;
}


int cmp(thiSinh a, thiSinh b){
    if(a.diemThi == b.diemThi) return a.SBD < b.SBD;
    return a.diemThi > b.diemThi;
}
int main()
{
    int t;
    cin >> t;
    thiSinh ts[t];
    for (int i = 0; i < t; i++)
    {
        ts[i].SBD = i + 1;
        nhap(ts[i]);
        congDiem(ts[i]);
        chuanHoa(ts[i]);
    }
    sort(ts, ts + t, cmp);
    for(int i = 0; i < t; i++){
        in(i + 1, ts[i]);
    }
    return 0;
}