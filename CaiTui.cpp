#include<bits/stdc++.h>
using namespace std;
int n,v;
int a[10000],b[10000],f[1005][1005];
int maxV(){
	for ( int i= 0; i<=n; i++){
		for ( int j = 0; j<=v; j++){
			if(i == 0 || j == 0) f[i][j] = 0;
			else if(a[i-1] <= j) f[i][j] = max(f[i-1][j-a[i-1]]+b[i-1],f[i-1][j]);
			else f[i][j] = f[i-1][j];  
		}
	}
	return f[n][v];
	
}

void solve(){
	cin >> n >> v;
	for ( int i  = 0; i<n; i++)	cin >> a[i];
	for ( int i  = 0; i<n; i++)	cin >> b[i];
	cout << maxV();
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

