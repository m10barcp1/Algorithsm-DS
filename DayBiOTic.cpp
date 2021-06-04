#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n],in[1005],de[1005],sum;
	for ( int i = 0; i<n; i++) {
		cin >> a[i];
		in[i] = de[i] = a[i];
	}
	for ( int i = 1 ; i<n; i++){
		sum = 0;
		for ( int j = i-1; j>=0; j--){
			if(a[i] > a[j]) sum = max(sum, in[j]);
		}
		in[i]+=sum;
	}
	for ( int i = n-2 ; i>=0; i--){
		sum = 0;
		for ( int j = i+1; j<n; j++){
			if(a[i] > a[j]) sum = max(sum, de[j]);
		}
		de[i]+=sum;
	}
	int res=0;
	for ( int i = 0; i<n; i++) res = max(res,in[i]+de[i]-a[i]);
	cout << res << endl; 
	
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
//NV Than

