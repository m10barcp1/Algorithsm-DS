#include<bits/stdc++.h>
using namespace std;
int a[100005];
void solve(){
	memset(a,0,sizeof(a));
	int k;
	cin >> k;
	string s;
	cin >> s;
	priority_queue<int> pq;
	int siz;
	for ( int i = 0; i<s.size(); i++){
		a[s[i]]++;
	}
	if(k>s.size()) cout << 0;
	else {
		for ( int i = 0; i<300; i++){
			if(a[i]) pq.push(a[i]);
		}
		int res = 0;
		while(k--){
			int x = pq.top();pq.pop();
			x--;
			pq.push(x);
		}
		while(!pq.empty()){
			res += pq.top()*pq.top(); pq.pop();
		}
		cout << res;
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



