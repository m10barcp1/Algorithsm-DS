#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	stack<int> st;
	for ( int i = s.size()-1; i>=0; i--){
		if(s[i]=='+'|| s[i] == '-' || s[i] == '*' || s[i] == '/'){
			int m = st.top();
			st.pop();
			int n = st.top();
			st.pop();
			if(s[i]=='+')	st.push(m+n);
			if(s[i]=='-')	st.push(m-n);
			if(s[i]=='*')	st.push(m*n);
			if(s[i]=='/')	st.push(m/n);
		}
		else {
			st.push(s[i]-'0');
		}
	}
	cout << st.top() << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



