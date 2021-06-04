#include<bits/stdc++.h>
using namespace std;
int a[100005];
void solve(){
	int n;
	cin >> n;

	memset(a,0,sizeof(a));
	a[0] = 0;
	a[1] = 1;
	for ( int i = 0; i<n-1; i++){
		int x,y;
		cin >> x >> y;
		a[y] = a[x] + 1;
	}
	sort(a+1,a+n+1);
	cout << a[n] - 1 << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



