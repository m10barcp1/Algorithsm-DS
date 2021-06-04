#include<bits/stdc++.h>
using namespace std;
int ok = 0,n;
int	a[100][100];
string p[1000];
int r[10],c[10];
void maze(int i, int j, int index){
	if(i==n && j==n){
		ok=1;
		for ( int k = 1; k<index; k++)
			cout << p[k];
		cout << " ";
	}else{
		int x,y;
		for ( int k = 0; k<=1; k++){
			x = i + r[k];
			y = j + c[k];
			if(a[x][y]==1 && x<=n && y<=n && x>0 && y>0){
				if(k==0) p[index] = 'D';
				else p[index] = 'R';
				maze(x,y,index+1);
			}
		}	
	}
}
void solve(){
	cin >> n;

	for ( int i = 1; i<=n; i++)	
		for ( int j = 1; j<=n; j++)
			cin >> a[i][j];
	if (a[1][1] == 0 || a[n][n] == 0) cout << "-1";
	else{
		maze(1,1,1);
		if(ok == 0) cout << "-1";
		ok = 0;
	}	
	cout << endl;
}
int main(){
	r[0] = 1; r[1] = 0; c[0] = 0; c[1] = 1;
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
