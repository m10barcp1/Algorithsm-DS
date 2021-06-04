#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
vector<int> v[1000];
void solve(){
	int n;
	cin >> n;
	for ( int i = 1; i<=n; i++){
		for ( int j = 1;j<=n; j++){
			cin >> a[i][j];
			if(a[i][j]) {
				v[i].push_back(j);
			}
		}
	}
	for ( int i = 1; i<=n; i++){
		for ( int j = 0; j<v[i].size(); j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	
		
}
int main(){
		solve();
}
// NV Than



