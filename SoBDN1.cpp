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
		if(x>n) break;
		q.push(x*10);
		q.push(x*10+1);
		dem++;
	}
	cout << dem << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



