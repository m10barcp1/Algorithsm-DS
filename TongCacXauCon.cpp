#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
    long long x = s[0]-'0';
    long long res = x, c = 0;
    for(int i = 1; i < s.size(); i++){
        int p = s[i]-'0';
        c = (i+1)*p + x*10;
        res+=c;
        x=c;
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



