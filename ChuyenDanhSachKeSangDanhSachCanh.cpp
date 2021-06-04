#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	cin.ignore();
	int a[100][100] = {};
	for (int i = 1; i<=n; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		while(ss>>a[i][++a[i][0]]);
	}
	for ( int i = 1; i<=n; i++){
		for (int j = 1; j<a[i][0]; j++){
			if(i<a[i][j]) cout << i << " " << a[i][j] << endl;
		}
	}
}
	

int main(){
		solve();
}
//NV Than

