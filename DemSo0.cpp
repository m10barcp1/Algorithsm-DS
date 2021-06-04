#include<bits/stdc++.h>
using namespace std;



void solve(){
	long long n;
	cin >> n;
	long long a[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	int i = 0;
	while(a[i]==0){
		i++;
	}
	cout << i << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

