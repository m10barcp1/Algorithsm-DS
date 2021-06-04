#include<bits/stdc++.h>
using namespace std;



void solve(){
	long long n,x;
	cin >> n >> x;
	long long a[n];
	int check;
	for ( int i = 0; i<n; i++)	cin >> a[i];
	for ( int i = 0; i<n; i++){
		if(a[i] == x){
			check = i+1;
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

