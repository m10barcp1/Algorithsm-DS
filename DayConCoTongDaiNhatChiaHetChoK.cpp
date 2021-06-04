#include <bits/stdc++.h>
using namespace std;
int a[1005], f[1005][55], n, k;
void solve(){
	int n,k;
	cin >> n >> k;
	for ( int i = 1; i<=n; i++)	cin >> a[i];
	for ( int i = 0; i<=n; i++)
		for ( int j = 0; j<=k; j++) f[i][j] = -1;
	f[1][a[1]%k] = 1;
	for ( int i = 2; i<=n; i++){
		for ( int j = 0; j<k; j++){
			f[i][j] = f[i-1][j];
			if(f[i-1][(j-a[i]+k)%k] != -1)
				f[i][j] = max(f[i][j],f[i-1][(j-a[i]+k)%k]+1);
		}
	}
	cout << f[n][0] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

