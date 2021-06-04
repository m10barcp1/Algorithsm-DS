#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	queue<string> q;
	q.push("6");
	q.push("8");
	vector<string> v;
	while(true){
		string s = q.front();
		q.pop();
		if(s.length()>n) break;
		v.push_back(s);
		q.push(s+"6");
		q.push(s+"8");
	}
	cout << v.size() << endl;
	for ( int i = 0; i<v.size(); i++){
		cout << v[i] << " ";
	}
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



