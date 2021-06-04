#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000007
void solve(){
	int n;
	cin >> n;
	vector<long long> a(n);
	for ( int i = 0; i<n; i++) cin >> a[i];
	sort(a.begin(),a.end());
	long long total = 0;
	for ( long long i = 0; i<n; i++){
		total+=a[i]*i;
		total=total%MAX;
	}
	cout << total << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


