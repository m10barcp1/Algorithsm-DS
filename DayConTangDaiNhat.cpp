#include<bits/stdc++.h>
using namespace std;

int n,a[10000], f[10000] = {1};
int maxString(){
	int res = 1;
	for ( int i  = 1 ; i<=n; i++){
		f[i] = 1;
		for ( int j = 0; j<i; j++)	{
			if(a[i] > a[j]) {
				f[i] = max(f[i], f[j] + 1);
			}
			res = max(res, f[i]);
		}
	}
	return res;
	
	
}

void solve(){
	cin >> n;
	for ( int i = 0; i<n; i++)	cin >> a[i];
	cout << maxString() << endl;
}

int main(){

		solve();
}
// NV Than

