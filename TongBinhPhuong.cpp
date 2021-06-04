#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n; 
	int f[10005];
	for ( int i = 1; i<=10000; i++){
		f[i] = i;
		for ( int j = 1; j<=sqrt(i); j++){
				f[i] = min(f[i] , f[i-j*j]+1);
		}
	}
	cout << f[n] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

