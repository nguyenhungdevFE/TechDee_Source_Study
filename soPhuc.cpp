#include <bits/stdc++.h>
#define fasten()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;

struct SoPhuc{
    int thuc, ao;
};

SoPhuc binh_phuong_tong(SoPhuc &a, SoPhuc &b){
       SoPhuc c;
	   a.thuc += b.thuc;
	   a.ao += b.ao;
	   c.thuc = a.thuc * a.thuc - a.ao * a.ao; 
	   c.ao = (a.thuc * a.ao) << 1;
	   return c;
}

void hien_thi(SoPhuc c){
	cout << c.thuc << " + " << c.ao <<  "i";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}