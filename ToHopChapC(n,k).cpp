#include<bits/stdc++.h>
using namespace std;
int n,k;

const long long M = 1e9+7;
void solve(){
	cin >> n >> k;
	long long c[n + 4][n + 5];
	for ( int i = 1; i <= n ; i++){
		for ( int j = 0; j <= i ; j++){
			if(j == 0 || j == i) a[i][j] = 1;
			else
			c[i][j] = (c[i-1][j] + c[i-1][j-1]) %M;
		}
	}
	cout <<c[n][k]<< endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

