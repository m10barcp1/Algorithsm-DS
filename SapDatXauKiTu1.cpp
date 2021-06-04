#include<bits/stdc++.h>
using namespace std;

void solve(){
	int d;
	cin >> d;
	string s;
	cin >> s;
	int a[255] = {0};
	for ( int  i = 0; i<s.size(); i++) a[s[i]]++;
	sort(a,a+255,greater<int>());
	int max = a[0];
	if(d<=(s.size()+1-max)) cout << "1";
	else cout << "-1";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		solve();
	}
}


