#include <bits/stdc++.h>
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
using namespace std;

int main()
{
    fasten();
    string s;
    ifstream fp;
    fp.open("VANBAN.in");
    set<string> se;
    while (!fp.eof())
    {
        fp >> s;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            for(int i = 0; i < word.size(); i++){
                word[i] = tolower(word[i]);
            }
            se.insert(word);
        }
    }
    fp.close();
    for (auto x : se)
    {
        cout << x << endl; 
    }
    return 0;
}