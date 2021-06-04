#include<bits/stdc++.h>
using namespace std;
bool isPrime( int n){
	if(n<2) return false;
	for ( int i = 2; i<=sqrt(n); i++)
		if(n%i==0) return false;
	return true;
}
void solve(){
	long long n;
	cin >> n;
	int check = 0,x,y;
	for ( int i = 2; i<n; i++){
		if(isPrime(i) && isPrime(n-i)){
			check = 1;
			cout << i << " " << n-i ;
			break;
		}
	}
	if(!check) cout << -1;
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

