#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> v;
		int temp = 0;
		for ( int i = 0; i<s.length()-1;i++){
			if(s[i] == '('){
			v.push(s[i]);
				if(s[i+1]!=v.top()) {
					v.pop();
					temp+=2;
				}
			}else if(v.empty()){
				continue;
			}else if(!v.empty()){
				if(s[i]!=v.top()){
					v.pop();
					temp+=2;
				}
			}
		}
		cout << temp << endl;
	}
}

