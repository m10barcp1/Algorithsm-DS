#include<bits/stdc++.h>
using namespace std;

void solve(){
	string a;
	cin >> a;
	int i=a.length() - 1;
	while(i>0&& a[i] == '1') i--;
	a[i] = '1';
	if(i>0){
		for ( int j = i+1; j<a.length(); j++){
			a[j] = '0';
		}
		for ( int j = 0; j<a.length(); j++)	cout << a[j];
	}else{
		for( int j = 0; j<a.length();j++) cout << '0';
	}
	
	
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
}
