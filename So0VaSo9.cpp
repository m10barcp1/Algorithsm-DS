#include<bits/stdc++.h>
using namespace std;
int n;

void solve(){
	cin >> n;
	queue<long long> q;
	q.push(9);
	bool check =false;
	while(!check){
		long long x = q.front(); 
		q.pop();
		if(x%n==0) {
			cout << x << endl;
			break;
		}
		q.push(x*10);
		q.push(x*10+9);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



