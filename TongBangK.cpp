#include <bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
void solve(){
	int n, k;
	cin >> n >> k;
	int a[1005];
	for ( int i = 1; i<=n; i++)	cin >> a[i];
	int f[1005] = {0};
	f[0]=1;
	for ( int i = 1; i<=k; i++){
		for ( int j = 1; j<=n; j++){
			if(a[j] <= i){
				f[i] = (f[i] + f[i-a[j]])%m;
			}
		}
	}
	cout << f[k] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

