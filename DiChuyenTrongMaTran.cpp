#include<bits/stdc++.h>
using namespace std;
int ok,n,m;
int	a[101][101];
int r[10],c[10];
void maze(int i, int j){
	if(i==n-1 && j==m-1){
		ok++;
	}else{
		int x,y;
		for ( int k = 0; k<=1; k++){
			x = i + r[k];
			y = j + c[k];
			if(x<n && y<m && x>=0 && y>=0){
				maze(x,y);
			}
		}	
	}
}
void solve(){
	ok = 0;
	cin >> n >> m;
	for ( int i = 0; i<n; i++)	
		for ( int j = 0; j<m; j++)
			cin >> a[i][j];
	maze(0,0);
	cout << ok << endl;
}
int main(){
	r[0] = 1; r[1] = 0; c[0] = 0, c[1] = 1;
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
