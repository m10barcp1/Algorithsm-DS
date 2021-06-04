#include<bits/stdc++.h>
using namespace std;



void solve(){
	string s;
	int n;
	cin >> n >> s;
	if(next_permutation(s.begin(),s.end()) == 1)
		cout << n << " " << s << endl;
	else cout << n << " BIGGEST" << endl;
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
