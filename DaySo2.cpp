#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[n], b[n+1][n+1];
	for ( int i = 0; i<n; i++){
			cin >> a[i];
			b[0][i] = a[i];
	}
	int res = n;
	int check = 1;
	while(res>0){
		for ( int i = 0;i<res-1; i++){
			a[i]+=a[i+1];
			b[check][i] = a[i];
		}
		check++;
		res--;
	}
	for ( int i = check-2; i>=0; i--){
		cout << "[";
		for ( int j = 0; j<n-i; j++){
			if(j==n-i-1) cout << b[i][j];
			else cout << b[i][j] << " ";
		}
		cout <<"]" << " ";
	}
	cout << endl;

	
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


