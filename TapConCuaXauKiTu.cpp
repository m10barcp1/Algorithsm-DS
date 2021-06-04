#include<bits/stdc++.h>
using namespace std;
vector<string> st;
void process(string in, string out){
	if(in.empty()){
		st.push_back(out);
		return;
	}
	process(in.substr(1),out + in[0]);
	process(in.substr(1),out);
}
void solve(){
	string s;
	cin >> s;
	string o = "";
	process(s,o);
	sort(st.begin(),st.end());
	for ( int i = 1; i<st.size(); i++) cout << st[i] << " ";
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
// NV Than



