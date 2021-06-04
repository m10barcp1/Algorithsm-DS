#include <bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
void solve(){
	int n, k;
	cin >> n >> k;
	int f[1005] = {0};
	f[0]=1; f[1] = 1;
	for ( int i = 2; i<=n; i++){
		f[i] = 0;
		for ( int j = 1; j<=k && j<=i; j++){
				f[i] = (f[i] + f[i-j])%m;
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

