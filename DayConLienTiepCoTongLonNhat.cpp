#include<bits/stdc++.h>
using namespace std;



long long maxSubArray(long long *a, long long n){
	long long max = a[0];
	for ( int i = 0; i<n; i++){
		long long S = 0;
		for ( int j = i; j<n; j++){
			S+=a[j];
			if(max<S) max = S;
		}
	}
	return max;
}

void solve(){
	long long a[100000], n;
	cin >> n;
	for ( int i = 0; i<n; i++)	cin >> a[i];
	cout << maxSubArray(a,n) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


