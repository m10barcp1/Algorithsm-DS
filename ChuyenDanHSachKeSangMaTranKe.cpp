#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
void solve(){
	int n;
	cin >> n;
	cin.ignore();
	int j;
	for ( int i = 1; i<=n; i++){
		for ( int j = 1; j<=n; j++) {
			a[i][j] = 0;
		}
	}
	for ( int i = 1; i<=n; i++){
		string s;
		getline(cin,s);
		istringstream s_cin(s);
		while(s_cin>>j) {
			a[i][j] = 1;
			a[j][i] = 1;
		}
	}
	for ( int i = 1; i<=n; i++){
		for ( int j = 1; j<=n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){

		solve();
}
// NV Than



