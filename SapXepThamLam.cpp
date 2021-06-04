#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n],b[n];
	for ( int i = 0; i<n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b,b+n);
	bool check = true;
	for (int i = 0; i<n; i++){
		if(a[i]!=b[i] && a[i]!=b[n-i-1] || b[i] != a[i] && b[i] != a[n-i-1]) {
			check = false;
			break;
		} 
	}
	if(check) cout << "Yes";
	else cout << "No";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


