#include<bits/stdc++.h>
using namespace std;
int c[1000005];
void solve(){
		int m,n;
        cin>>m>>n;
        int a[m],b[n];
        for(int i = 0; i < m; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];
        int maxx = m+n;
        for(int i = 0; i < m+n; i++) c[i] = 0;
        for(int i = 0; i < m ;i++){
            for(int j = 0; j < n; j++){
                c[i+j]+=a[i]*b[j];
            }
        }
        for(int i = 0; i < m+n-1; i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



