#include<bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
int f[1005][5005];
void solve(){
	memset(f,0,sizeof(f));
	int n, k;
    cin >> n >> k;
    for(int i = 1; i <= k; i++){
        if(i <= 9) f[1][i]=1;
    }
    for(int i = 2; i <= n; i++)
    for(int j = 1; j <= k; j++)
    for(int num = 0; num <= 9; num++){
        if(num <= j)
        f[i][j] = (f[i][j] + f[i-1][j-num])%M;
        else break;
    }
    cout << f[n][k] << endl;	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



