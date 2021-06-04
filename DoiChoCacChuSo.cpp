#include<bits/stdc++.h>
using namespace std;

void solve(){
	int k;
	cin >> k;
	cin.ignore();
	string s;
	cin >> s;
	int dem = 0;
	int Max;
	for(int i = 0; i<s.length()-1;i++){
		Max = i+1;
		for ( int j = i+1; j<s.length(); j++){
			if(s[j]>=s[Max]){
				Max=j;
			}
		}
		if(s[Max]>s[i]&&k>0){
				swap(s[Max],s[i]);
				k--;
			}
	}
	cout << s << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
//NV Than

