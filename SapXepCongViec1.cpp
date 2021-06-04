#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[100005],b[100005];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	for ( int i = 0; i<n; i++)	cin >> b[i];
	vector<pair<int, int> >v;
	for ( int i = 0; i<n; i++)	v.push_back(make_pair(b[i],a[i]));
	sort(v.begin(),v.end());
	int temp = v[0].first;
	int dem = 1;
	for ( int i = 1; i<v.size(); i++){
		if(v[i].second>=temp){
			dem++;
			temp = v[i].first;
		}
	}
	cout << dem <<endl;
	v.clear();
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



