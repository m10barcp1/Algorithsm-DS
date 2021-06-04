#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[10005];
	for ( int i = 0; i<n; i++) cin >> a[i];
	int check = 1;
	for ( int i = 1; i<n; i++){
		if(a[i] <= a[i-1]) {
			check = 0;
			break;
		}
	}
	cout << check << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



