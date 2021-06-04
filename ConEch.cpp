#include<bits/stdc++.h>
using namespace std;
long long tribo(int n){
	long long f2 = 2,f0=1, f1 = 1,fn;
	if(n==0) return f0;
	if(n==1) return f1;
	if(n==2) return f2;
	
	for ( int i = 3; i<=n; i++){
		fn = f0+f1+f2;
		f0=f1;
		f1=f2;
		f2=fn;
	}
	return fn;
}
void solve(){
	int n;
	cin >> n;
	cout << tribo(n) << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
//NV Than

