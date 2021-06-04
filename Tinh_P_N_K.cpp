#include<bits/stdc++.h>
using namespace std;
const long long m = 1e9+7;

int tinh(int n, int k){
	int kq = n;
	for ( int i = n-1; i>=n-k+1; i--){
		kq = (kq%m*i%m)%m;
	}
	return kq;
}

void solve(){
	int n,k;
	cin >> n >> k;
	cout << tinh(n,k) << endl;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
