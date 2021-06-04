#include<bits/stdc++.h>
using namespace std;
int a[1000005], f[1000005];
void solve(){
	int n;	cin >> n;
	for ( int i = 0; i<n; i++)	cin >> a[i];
	f[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--){
        if(i+2 >= n) f[i] = max(a[i],f[i+1]);
        else f[i] = max(a[i] + f[i+2], f[i+1]);
    }
    cout << f[0] << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



