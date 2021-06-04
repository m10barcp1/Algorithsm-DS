#include<bits/stdc++.h>
using namespace std;
long long f[10005] = {0};
long long res(string s){
	if(s[0]=='0') return 0;
    memset(f,0,sizeof(f));
	f[0] = 1;
	f[1] = 1;
	for ( int i = 2; i<=s.size(); i++){
		if(s[i-1]>'0') f[i] = f[i-1];
		if(s[i-2]=='1'||(s[i-2] == '2'&&s[i-1] <'7')) f[i]+=f[i-2];
		//if(s[i-1] >'2'&&s[i]=='0') return 0;
 
	}
	return f[s.size()];
}
 
void solve(){
	string s;
	cin >> s;
	f[10005] = {0};
	cout << res(s) << endl;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		solve();
	}
}
