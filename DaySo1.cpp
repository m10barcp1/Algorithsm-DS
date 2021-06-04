#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int a[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	int res = n;
	cout << "[";
	for ( int i = 0; i<n-1; i++) cout <<a[i] << " ";
	cout << a[n-1] << "]" << endl;
	while(res>1){
		cout << "[";
		for ( int i = 0;i<res-1 ; i++){
			a[i]+=a[i+1];
			if(i==res-2) cout << a[i];
			else cout << a[i] << " ";
		}
		cout << "]" << endl;
		res--;
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


