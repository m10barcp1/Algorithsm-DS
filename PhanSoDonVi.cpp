#include<bits/stdc++.h>
using namespace std;

long long mauChung(long long  a, long long b){
    long long temp = __gcd(a,b);
    return a*b/temp;
}
void conver(long long tuSo, long long mauSo){
    if(tuSo >= mauSo){
        if(tuSo%mauSo == 0){
            cout << tuSo / mauSo;
            return;
        }
        else{
            int x = tuSo/mauSo;
            cout << x <<" + ";
            tuSo -= mauSo*x;
        }
    }
    if(mauSo%tuSo == 0){
        cout << "1/" << mauSo / tuSo;
        return;
    }
    long long x = mauSo/tuSo +1;
    cout << "1/" << x <<" ";
    long long msc = mauChung(x,mauSo);
    long long tsc = msc/x;
    long long tuSoX = tuSo;
    tuSoX *= msc/mauSo;
    tuSoX -= tsc;
    if(tuSoX == 0 || mauSo == 0) return;
    cout<<"+ ";
    return conver(tuSoX,msc);
}
void solve(){
	long long p,q;
	cin >> p >> q;
	conver(p,q);
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



