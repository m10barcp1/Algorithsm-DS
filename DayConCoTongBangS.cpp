#include<bits/stdc++.h>
using namespace std;

int n,a[100005] ,sum;
bool totalS(int *f){
	f[sum] = 0; f[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = sum; j >= a[i]; j--){
            if(f[j] == 0 && f[j-a[i]] == 1 ) f[j]=1;
        }
    }
    return f[sum];
	
	
}

void solve(){
	int f[100005] = {0};
	cin >> n >> sum;
	for ( int i = 1; i<=n; i++)	cin >> a[i];
	if(totalS(f)) cout << "YES";
	else cout << "NO";
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

