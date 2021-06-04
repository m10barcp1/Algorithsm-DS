#include<bits/stdc++.h>
using namespace std;



void solve(){
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	int c[n+m];
	for ( int i = 0; i<m; i++)	{
		cin >> a[i];
		c[i] = a[i];
	}
	for ( int i = 0; i<n; i++)	{
		cin >> b[i];
		c[n+i] = b[i];
	}
	sort(c,c+n+m);
	for ( int i = 0; i<n+m; i++){
		cout << c[i] << " ";
	}
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

