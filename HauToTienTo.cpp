#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	stack<string> st;
	for ( int i = 0; i<s.size(); i++){
		if(s[i]=='+'|| s[i] == '-' || s[i] == '*' || s[i] == '/'){
			string m = st.top();
			st.pop();
			string n = st.top();
			st.pop();
			string res = s[i] + n + m;
			st.push(res);
		}
		else {
			st.push(string(1,s[i]));
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



