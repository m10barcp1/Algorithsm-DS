#include<bits/stdc++.h>
using namespace std;
int n,a[1005][1005],dem;
void dc(int x, int y, string s){
	if(x==n-1&&y==n-1){
		dem++;
		cout << s << " ";
	}else{
		if(x<n-1&&a[x+1][y]){
			s+='D';
			dc(x+1,y,s);
			s.pop_back();
		}
		if(y<n-1&&a[x][y+1]){
			s+='R';
			dc(x,y+1,s);
			s.pop_back();
		}
	}
}
void solve(){
	dem = 0;
	cin >> n;
	for ( int i = 0; i<n; i++){
		for ( int j = 0; j<n; j++){
			cin >> a[i][j];
		}
	}
	string s = "";
	if(a[0][0]){
		dc(0,0,s);
		if(!dem) cout << -1;
	}else		 cout << -1;
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



