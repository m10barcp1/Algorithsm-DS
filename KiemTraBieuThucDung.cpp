#include<bits/stdc++.h>
using namespace std;

void solve(){
	
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		stack<char> st;
		int kt = 0;
		for ( int i = 0; i<s.size(); i++){
			if(s[i]!=')' && s[i] != ' ') st.push(s[i]);
			else if(s[i]!=' '){
				bool check = false;
				while(!st.empty()){
					char x = st.top(); st.pop();
					if(x =='('){
						if(!check) kt = 1;
						break;
					}else if (x=='+'||x=='-'||x=='*'||x=='/'||x=='%'||x=='^'){
						check = true;
					}
					if(kt==1) break;
				}
			}
		}
		if(kt==1) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}
// NV Than



