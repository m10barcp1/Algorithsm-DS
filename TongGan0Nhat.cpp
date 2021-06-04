#include<bits/stdc++.h>
using namespace std;



void solve(){
	long long n;
	cin >> n;
	long long a[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	long long min = 10000000;
	for ( int i = 0; i<n; i++){
		for ( int j = i+1; j<n; j++){
			if(abs(a[i] + a[j]) < abs(min)){
				min = a[i] + a[j];
			}
		}
	}
	cout << min << endl;
}	

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

