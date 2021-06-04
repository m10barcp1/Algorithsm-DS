#include<bits/stdc++.h>
using namespace std;
int n, s;
int a[100005];
int res;
void r(int i, int s, int Minn){
	if(s < 0) return;
	if(i == n && s == 0){
		if(Minn < res ){
			res = Minn;
			return;
		}
	}
	if(i == n) return;
	r(i+1,s,Minn); 
	r(i+1,s-a[i],Minn+1);
}

void solve(){
	cin >> n >> s;
	res = 1e9+7;
	for ( int i = 0; i<n; i++)	cin >> a[i];
	r(0,s,0);
	if(res==1e9+7) cout << -1;
	else cout << res;
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



