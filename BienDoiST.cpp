
#include<bits/stdc++.h>
using namespace std;

long long res(int n, int m){
	if(m <= n) return n-m;
    else{
        if(m%2==0) return 1+res(n,m/2);
        else return 2+res(n,(m+1)/2);
    }
}

void solve(){
	int n, m;
	cin >> n >> m;
	cout << res(n,m) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



