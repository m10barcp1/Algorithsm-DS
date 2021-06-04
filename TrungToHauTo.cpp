#include<bits/stdc++.h>
using namespace std;

int priority(char x){
    if(x == '(') return 1;
    else if(x == '+' || x == '-') return 2;
    else if(x == '*' || x =='/') return 3;
    return 4;
}

void KPBalan(string s, stack <char> a){
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z') cout<<s[i];
        else if(s[i] >= 'a' && s[i] <= 'z') cout<<s[i];
        else{
            if(s[i] == '(') a.push(s[i]);
            else{
                if(s[i] == ')'){
                    while(!a.empty() && a.top() != '('){
                        cout<<a.top();
                        a.pop();
                    }
                    a.pop();
                }
                else{
                    if(!a.empty()){
                        while(priority(s[i]) <= priority(a.top()) && !a.empty()){
                            cout<<a.top();
                            a.pop();
                            if(a.empty()) break;
                        }
                    }
                    a.push(s[i]);
                }
            }
        }
    }
    while(!a.empty()){
        if(a.top() != '(')
        cout<<a.top();
        a.pop();
    }
}
void solve(){
	 string s;
        stack<char> a;
        cin>>s;
        KPBalan(s,a);
        cout<<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



