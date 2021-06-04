#include<bits/stdc++.h>
using namespace std;
string s;
char word(long long n, long long k){
	if(k<=s.size()) return s[k-1];
	k--;
	if(k<=n/2) {
		if(k!=n/2) k++;
		return word(n/2,k);
	}
	return word(n/2,k-n/2);
}

void solve(){
	cin >> s;
	cin.ignore();
	long long k;
	cin >> k;
	long long n = s.size();
	while(n<k) n*=2;
	cout << word(n,k) << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



