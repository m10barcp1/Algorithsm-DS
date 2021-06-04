#include<bits/stdc++.h>
using namespace std;
const long long MAX = 1e9+7;
long long n;
struct Matrix{
	long long m[2][2];
	Matrix(){
		m[0][0] = 0;
		m[0][1] = 1;
		m[1][0] = 1;
		m[1][1] = 1;
	}
};
Matrix operator * (Matrix a, Matrix b){
	Matrix res;
	for (int i = 0; i<=1; i++){
		for ( int j = 0; j<=1; j++){
			res.m[i][j] = 0;
			for ( int k = 0; k<=1; k++){
				res.m[i][j] = (res.m[i][j]+a.m[i][k]*b.m[k][j])%MAX;
			}
		}
	}
	return res;
}
Matrix Nhan(Matrix a, long long n){
	if(n==1) return a;
	if(n%2==1) return Nhan(a,(n-1)) * a;
	Matrix x = Nhan(a,n/2);
	return x*x;
}

void solve(){
	cin >> n;
	Matrix a;
	Matrix r = Nhan(a,n);
	cout << r.m[0][1] << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



