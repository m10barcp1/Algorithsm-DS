#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[10005];
	for ( int i = 0; i<n; i++) cin >> a[i];
	stack<int> s;
	int dem = 1;
	for ( int i = 0, j = 1; j<n; i++, j++){
		bool check = false;
		if(a[i] > a[j]) s.push(a[i]);
		else{
			while(!s.empty()){
				if(a[j] > s.top()){
					s.pop();
					check = true;
				}else break;
			}
		}
		if(check) cout << a[i] << " ";
	}
	cout << a[n-1] << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



