#include<bits/stdc++.h>
using namespace std;
const long long m = 1e9+7;
int f[100005];
int tinh(int *a, int n){
    for(int i = 0; i < n; i++) f[i] = a[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[j] < a[i] && f[i] < f[j] + a[i]) f[i]=f[j]+a[i];
        }
    }
    sort(f,f+n);
    return f[n-1];
}

void solve(){
	int n,a[100005];
	cin >> n;
	for( int i = 0;i<n; i++) cin >> a[i];
	cout << tinh(a,n) << endl;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
