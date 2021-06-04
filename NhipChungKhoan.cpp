#include<bits/stdc++.h>
using namespace std;
int a[100005],n;
void solve(){
	cin >> n;
	for ( int i = 0; i<n; i++) cin >> a[i];
	int res[100005];
	res[0] = 1;
	stack<int> st;
	for ( int i = 0; i<n; i++){
		while(!st.empty()&&a[i]>=a[st.top()]) st.pop();
		if(st.empty()) res[i] = i+1;
		else {
			res[i] = i-st.top();
		}
		st.push(i);
	}
	for ( int i = 0; i<n; i++) cout << res[i] << " ";
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



