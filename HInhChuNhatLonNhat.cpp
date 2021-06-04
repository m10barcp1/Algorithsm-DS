#include<bits/stdc++.h>
using namespace std;
int n,a[1000005];
void solve(){
	cin >> n;
	for ( int i = 0; i<n; i++) cin >> a[i];
	stack<int> st;
	int res = 0, check;
	for ( int i = 0; i<n; i++){
		if(st.empty()) {
			st.push(i);
			continue;
		}else if(a[st.top()]<=a[i]){
			st.push(i);
			continue;
		}else{
			int x = st.top(); st.pop();
			if(st.empty()){
				check = a[x] * i;
			}else {
				check = a[x] * (i - st.top() - 1);
			}
			res = max(res, check);
			i--;
		}
	}
	while(!st.empty()){
		int x = st.top(); st.pop();
		if(st.empty()){
			check = a[x] * n;
		}else{
			check = a[x] * (n - st.top() - 1);
		}
		res = max(check,res);
	}
	cout << res << endl;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



