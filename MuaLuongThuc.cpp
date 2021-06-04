#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	int x = b*c;
	int ok = 0;
	for ( int i = 1; i<=b-b/7; i++){
		if(a*i>=x) {
			ok = 1;
			cout << i;
			break;
		}
	}
	if(!ok) cout << "-1";
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

