#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> m >> n;
	int a[m],b[n];
	for ( int i = 0; i<m; i++)	cin >> a[i];
	for ( int i = 0; i<n; i++)	cin >> b[i];
	sort(b,b+n);
	int z[5] = {0};
	for ( int i = 0; i<n; i++){
		if(b[i]<5) z[b[i]]++;
	}
	int res = 0;
	for ( int i = 0; i<m; i++){
		if(a[i] == 0) continue;
		if(a[i] == 1) {
			res+=z[0];
			continue;
		}
		int *index = upper_bound(b,b+n,a[i]);
		int temp = b+n-index;
		temp += z[0] + z[1];
		if (a[i] == 2) temp -= (z[3] + z[4]);  
    	if (a[i] == 3) temp += z[2];  
    	res += temp;
	}
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

