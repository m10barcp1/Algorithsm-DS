#include<bits/stdc++.h>
using namespace std;
int f[1005][1005] = {0};
int maxV(string a){
	int res = 1,j,i,k;
	for (i = 0; i<a.size(); i++)	f[i][i] = 1;
	for (k= 1; k<a.size(); k++){
		for ( i = 0; i<a.size()-k; i++){
			j=i+k;
			if(a[i]==a[j]&&k==1) f[i][j] =1;
			else if(a[i]==a[j]&&k>1) f[i][j] = f[i+1][j-1];
			else f[i][j] = 0;
			if(f[i][j]) res = max(res,j-i+1);
		}
		
	}
	return res;
}

void solve(){
	string a;
	cin >> a;
	cout << maxV(a);
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
