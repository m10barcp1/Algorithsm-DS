#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int x;
	for ( int i = 1; i>=0; i--){
		int x = i;
		for ( int j = 0; j<n; j++){
			if(x==0){
				cout << 1 << " ";
				x = 1;
			}else {
				cout << 0 << " ";
				x = 0;
			}
		}
		cout << endl;
	}
}
int main(){
		solve();
}
// NV Than



