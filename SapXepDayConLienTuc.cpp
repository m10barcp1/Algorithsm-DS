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
	sort(a,a+n);
	int l = 0, r = n-1;
	while(a[l]==b[l] && l<n) l++;
	while(a[r]==b[r] && r>=0) r--;
	if(r>l) cout << l+1 << " " << r+1 << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

