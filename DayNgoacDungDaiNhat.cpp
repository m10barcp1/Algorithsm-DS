#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> v;
		int res = 0;
		v.push(-1);
		for ( int i = 0; i<s.length();i++){
			if(s[i] == '(')
			v.push(i);
			else{
				v.pop();
				if(!v.empty()) res = max(res,i-v.top());
				else v.push(i);
			}
		}
		cout << res << endl;
	}
}

