#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	int mo = 0, dong = 0, res = 0, chenhlech = 0;
	for ( int i = 0; i<s.size(); i++){
		if(s[i] == '['){
			mo++;
			if(chenhlech>0){
				res+=chenhlech--;
			}
		}else{
			dong++;
			chenhlech = dong - mo;
		}
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



