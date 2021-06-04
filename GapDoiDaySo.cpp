#include<bits/stdc++.h>
using namespace std;



void solve(){
	long long n,k;
	cin >> n >> k;
	for ( int i = n-1; i>=0; i--){
		long long h = pow(2,i);
		if(k%h==0) {
			cout << i+1;
			break;
		}
	}
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

