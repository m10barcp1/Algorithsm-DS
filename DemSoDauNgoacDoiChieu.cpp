#include<bits/stdc++.h>
using namespace std;
	
void solve(){
	string s;
	cin >> s;
	int dem = 0; 
	stack<char> st;
	for ( int i = 0; i<s.size(); i++)	{
		if(s[i]=='(') st.push(s[i]);
		else {
			if(st.empty()) {
				st.push(s[i]);
				dem++;
			} else {
				st.pop();	
			}
		}	
	}
	dem+=st.size()/2;
	cout << dem << endl;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		solve();
	}
}
// NV Than



