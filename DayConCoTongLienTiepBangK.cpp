#include<bits/stdc++.h>
using namespace std;
long long n,k,a[100005];
void solve(){
	cin >> n >> k;
	bool check = false, kt = false;
	for ( long long i = 0; i<n; i++){
		cin >> a[i];
		if(!a[i]) check = true;
	}
	long long z = 0, res = 0;
	if(!k&&check) cout << "YES";
	else if(!k&&!check) cout << "NO";
	else {
		for ( long long i = 0; i<n; i++){
			res+= a[i];
			while(res-a[z]>=k){
				res-=a[z++];
			}
			if(res==k) {
				cout << "YES";
				kt = true;
				break;
			}
		}
		if(!kt) cout << "NO";
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
// NV Than
a[i][j] = 1;
chay 2 for  
a[i][j] = a[i-1][j]+ a[i][j-1];
cout << a[n][m];



