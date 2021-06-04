#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	getline(cin,s);
	string p;
	vector<string> v;
	stringstream ss(s);
	while(ss>>p){
		v.push_back(p);
	}
	for ( int i = v.size()-1; i>=0; i--){
		cout << v[i] << " ";
	}
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore()
;	while(t--){
		solve();
	}
}
// NV Than



