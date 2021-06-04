#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	long long a[n],b[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	for ( int i = 0; i<n; i++)	cin >> b[i];
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	long long x=0;
	for ( int i = 0; i<n; i++)	{
		x+= (a[i]*b[i]);
	}
	cout << x << endl;
	

}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than
