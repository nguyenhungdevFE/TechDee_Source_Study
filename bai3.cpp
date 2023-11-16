#include<bits/stdc++.h>

using namespace std;

class sanPham{
    public:
    string ma, ten;
    int giaBan, baoHanh;
    friend istream &operator>> (istream &is, sanPham &sp){
        scanf("\n");
        getline(cin, sp.ma);
        getline(cin, sp.ten);
        cin >> sp.giaBan >> sp.baoHanh;
        return is;
    }
    friend ostream &operator<< (iostream &out, sanPham &sp){
        cout << sp.ma << " " << sp.ten << " " << sp.giaBan << " " << sp.baoHanh << endl;
        return out;
    }

};

int cmp(sanPham a, sanPham b){
    if(a.giaBan == b.giaBan) return a.ma < b.ma;
    return a.giaBan > b.giaBan;
}

int main()
{
    int t; cin >> t;
    sanPham sp[t];
    for(int i = 0; i < t; i++){
        
    }
}