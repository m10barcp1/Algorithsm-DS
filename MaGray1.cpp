#include<bits/stdc++.h>
using namespace std;
int m,n,a[10000],b[10000];
void solve(){
	cin>>m;
	a[0]=0;
	a[1]=1;
	int p=1;
	n=2;	
	for(int i=2;i<=m;i++)
	{
		p=p*2;
		int u=2*n-1;
		for(int j=n;j<=u;j++) a[j]=a[u-j]+p;
		n=n*2;
	}
	for(int i=0;i<n;i++)
	{
		int k=0;
		int u=a[i];
		while(u>0)
		{
			b[k++]=u%2;
			u/=2;			
		}
		for(int j=k+1;j<=m;j++) cout << 0;
		while(k>=1) cout << b[--k] ;
		cout << " ";
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
