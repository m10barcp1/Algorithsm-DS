#include<bits/stdc++.h>
using namespace std;
int n,m,a[1005][1005];
int check(){
	int h,c;
	int dem1 = 0, dem2 = 0, dem3 = 0;
	for ( int i = 1; i<=n; i++){
		h = 0;
		c = 0;
		for ( int j = 1; j<=n; j++){
			h+= a[i][j];
			c+= a[j][i];
		}
		if(h==c) dem1++;
		else if(h-c == 1){
			dem2++;
			h = i;
		}
		else if(c-h == 1){
			dem3++;
			c = i;
		}
	}
	if(dem1 == n) return 1;
	return 0;
}
void solve(){
	memset(a,0,sizeof(a));
	cin >> n >> m;
	for ( int i = 0 ; i<m; i++){
		int x, y;
		cin >> x >> y;
		a[x][y] = 1;
	}
	cout << check() << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



