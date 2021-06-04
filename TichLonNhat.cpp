#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[100005];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	sort(a,a+n);
	vector<int> v;
	v.push_back(a[0]*a[1]*a[2]);
	v.push_back(a[0]*a[1]);
	v.push_back(a[n-1]*a[n-2]*a[n-3]);
	v.push_back(a[n-1]*a[n-2]*a[0]);
	v.push_back(a[0]*a[1]*a[n-1]);
	v.push_back(a[n-1]*a[n-2]);
	sort(v.begin(),v.end());
	cout << v[v.size()-1];
	
}
int main(){

		solve();
}
// NV Than



