#include<bits/stdc++.h>
using namespace std;
int n, m, a[1005][1005];
int d[1000005];

bool check(){
	for ( int i = 1; i<=n; i++) d[i] = 1e9;
	d[1] = 0;
	for ( int k = 0; k<n-1; k++){
		for( int i = 1; i<=n; i++){
			for ( int j = 1; j<=n; j++){
				if(d[j] > d[i] + a[i][j]){
					d[j] = d[i] + a[i][j];
				}
			}
		}
	}
	for ( int i = 1; i<=n; i++){
		for ( int j = 1; j<=n; j++){
			if(d[j] > d[i] + a[i][j]){
				return true;
			}
		}
	}	
	return false;
}

void solve(){
	cin >> n >> m;
	for(int i=0;i<=n;i++)
	    for(int j=0;j<=n;j++)
	        a[i][j] = 1e7;
	for ( int i = 0; i<m; i++){
		int x,y,c;
		cin >> x >> y >> c;
		a[x][y] = c;
	}
	if(check()) cout << 1;
	else cout << 0;
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



