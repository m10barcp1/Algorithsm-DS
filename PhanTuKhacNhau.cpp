#include<bits/stdc++.h>
using namespace std;



void solve(){
	long long n;
	cin >> n;
	long long a[n], b[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	for ( int i = 0; i<n-1; i++)	cin >> b[i];
	int i = 0;
	while(a[i]==b[i]){
		i++;
	}
	cout << i+1 << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

