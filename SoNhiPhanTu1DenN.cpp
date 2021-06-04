#include<bits/stdc++.h>
using namespace std;
int n;

void solve(){
	cin >> n;
	queue<long long> q;
	q.push(1);
	for ( int i = 1; i<=n; i++){
		long long x = q.front(); 
		q.pop();
		cout << x << " ";
		q.push(x*10);
		q.push(x*10+1);
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



