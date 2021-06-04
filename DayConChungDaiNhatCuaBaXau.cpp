#include<bits/stdc++.h>
using namespace std;
long long f[100][100][100] = {0};
int n,m,l;
void solve(){
	int a[100005],b[100005],c[100005];
	cin >> n >> m >> l;
	for ( int i = 0 ; i < n; i++) cin >> a[i];
	for ( int i = 0 ; i < m; i++) cin >> b[i];
	for ( int i = 0 ; i < l; i++) cin >> c[i];
	vector<int> v;
	for ( int i = 0; i<n; i++){
		for ( int j = 0; j<m; j++){
			if(a[i]==b[j]) {
				v.push_back(a[i]);
				continue;
			}
		}
	}
	vector<int> res;
	for ( int i = 0; i<l; i++){
		for ( int j = 0; j<v.size(); j++){
			if(c[i]==v[j]) {
				res.push_back(v[j]);
				continue;
			}
		}
	}
	for ( int i = 0; i<res.size(); i++){
		cout << res[i] << " ";
	} 
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		solve();
	}
}
// NV Than
