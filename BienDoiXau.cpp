#include<bits/stdc++.h>
using namespace std;
int f[1005][1005] = {0};
long long maxV(string a, string b){
	for ( int i= 0; i<=a.size(); i++){
		for ( int j = 0; j<=b.size(); j++){
			if(i==0||j==0) f[i][j] = i+j;
			else if(a[i-1] == b[j-1]) f[i][j] = f[i-1][j-1];
			else f[i][j] = min(f[i-1][j-1], min(f[i][j-1],f[i-1][j]))+1; 
		}
	}
	return f[a.size()][b.size()];
}

void solve(){
	string a,b;
	cin >> a >> b;
	cout << maxV(a,b);
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than
