#include <bits/stdc++.h>
using namespace std;


int a[100000], b[100000], n, x, p=0;
bool ok;
vector<int> v[10000];
void gan(int M){
	for ( int i = 0; i<M; i++){
		v[p].push_back(b[i]);
	}
	p++;
}
void Try(int N, int M, int sum){
	for (int i = N; i<n; i++){
		b[M] = a[i];
		if(sum + b[M] == x) {
			ok = true;
			gan(M+1);
		}else{
			if(sum+b[M] < x){
				Try(i,M+1, sum + b[M]);
			}
		}
	}
}
void solve(){
	cin >> n >> x;
	for ( int i = 0; i<n; i++) cin >> a[i];
	Try(0,0,0);
	if(!p) cout << -1 << endl;
	else {
		cout << p << " ";
		for ( int i = 0; i<p; i++){
			cout << "{";
			for ( int j = 0; j<v[i].size(); j++){
				if(j!=v[i].size()-1) cout << v[i][j] << " ";
				else cout << v[i][j];
			}
			cout << "} ";
		}
	}
	
	for ( int i = 0; i<1000; i++) {
		v[i].clear();
	}
	p = 0;
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
