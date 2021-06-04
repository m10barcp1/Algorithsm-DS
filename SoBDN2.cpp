#include<bits/stdc++.h>
using namespace std;
long long n;

void solve(){
	cin >> n;
	queue<long long> q;
	q.push(1);
	long long dem = 0;
	bool check = false;
	while(!check){
		long long x = q.front(); 
		q.pop();
		if(x%n==0) {
			cout << x << endl;
			check = true;
		} 
		q.push(x*10);
		q.push(x*10+1);
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



