#include <bits/stdc++.h>
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

using namespace std;

struct sinhVien
{
    string maSinhVien, hoVaTen, className, email;
};

int main()
{
    fasten();
    int n;
    fstream fp;
    fp.open("SINHVIEN.in");
    string str;
    getline(fp, str);
    n = stoi(str); // Convert the string to an integer
    sinhVien sv[n];
    for (int i = 0; i < n; i++)
    {
        getline(fp, sv[i].maSinhVien);
        getline(fp, sv[i].hoVaTen);
        getline(fp, sv[i].className);
        getline(fp, sv[i].email);
    }
    for(int i = 0; i < n; i++){
        string name = "";
        stringstream ss(sv[i].hoVaTen);
        string word;
        while(ss >> word){
            for(int j = 0; j < word.size(); j++){
                word[j] = tolower(word[j]);
            }
            word[0] = toupper(word[0]);
            name += word + " ";
        }
        sv[i].hoVaTen = name;
    }
    fp.close();
    for(sinhVien x : sv){
        cout << x.maSinhVien << " " << x.hoVaTen << x.className << " " << x.email << endl;
    }
    return 0;
}
