#include <bits/stdc++.h>
using namespace std;
void solve(){
	string binary,gray;
	cin >> gray;
	binary = "";
	binary += gray[0];
	for ( int i = 1; i<gray.size(); i++){
		if(gray[i] == '0') binary+= binary[i-1];
		else {
			if(binary[i-1] == '0')
			binary += '1';
			else binary += '0';
		} 
	}
	cout << binary << endl;
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
