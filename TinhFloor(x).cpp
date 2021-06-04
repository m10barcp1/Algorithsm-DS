#include<bits/stdc++.h>
using namespace std;



void solve(){
	long long n,x;
	cin >> n >> x;
	long long a[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];	
	int i = 0;
	int check = 0;
	while(a[i]<=x){
		i++;
		check = 1;
	}
	if(check) cout << i;
	else cout << -1;
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

