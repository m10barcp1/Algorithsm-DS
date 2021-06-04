#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,k;
		cin>>n>>k;
		int h=n+1;
		int a[k+1];
		for(int i=1 ;i<=k ;i++) cin>>a[i];
		int u=-1,count=0;
		for( int i=k ;i>1 ;i--){
			if((a[i]-1) > a[i-1]){
				u=i;
				count++;
				break;
			}
		}
		if(count==0){
			if(a[1]==(n-k+1)){
				cout<<n-k<<" ";
				for(int i=2 ;i<=k ;i++) cout<<a[i]<<" ";
			}else{
				if(a[1]==1){
					for(int i=1 ; i<=k ;i++) cout<<n-k+i<<" ";
				}else{
					a[1]=a[1]-1;
					for(int i=k ;i>1 ;i--){
						a[k]=h;
						h--;
					}
					for(int i=1 ; i<=k ;i++) cout<<a[i]<<" ";
				}
			}
		}else{
			a[u]=a[u]-1;
			for(int i=u+1 ;i<=k ;i++) a[i]=n-k+i;
			for(int i=1 ; i<=k ;i++) cout<<a[i]<<" ";
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



