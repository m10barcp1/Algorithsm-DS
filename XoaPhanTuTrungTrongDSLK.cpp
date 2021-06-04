#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	set<long long> s;
	set<long long>::iterator it;
	long long k;
	for ( int i = 0 ;i<n; i++) {
		cin >> k;
		s.insert(k);
	}

	for (it=s.begin();it!=s.end();it++){
		cout <<*it << " ";
	}
}
int main(){
		solve();
}
// NV Than



