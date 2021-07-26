#include<bits/stdc++.h>
using namespace std;
int f[1005][1005] = {0};
int maxV(string a, string b){
	for ( int i= 0; i<a.size(); i++){
		for ( int j = 0; j<b.size(); j++){
			if(a[i] == b[j]) f[i+1][j+1] = f[i][j]+1 ;
			else f[i+1][j+1] = max(f[i+1][j],f[i][j+1]);  
		}
	}
	return f[a.size()][b.size()];
}

AGGTAB
GXTXAYB  
void solve(){
	string a,b;
	cin >> a >> b;
	cout << maxV(a,b);
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
// NV Than

