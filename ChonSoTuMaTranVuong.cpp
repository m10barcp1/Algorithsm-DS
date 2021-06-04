#include<bits/stdc++.h>
using namespace std;
int count = 0, c[100][100], z = 0,a[100][100],n,x,b[100],Bool[100]={0};
void inKQ(){
	int sum = 0;
	for ( int i = 1; i<=n; i++){
			sum+=a[i-1][b[i]-1];
	}
	if(sum==x){
		for ( int i = 1; i<=n; i++){
			c[z][i] = b[i];
		}
		z++;
	}
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if (!Bool[j]){
			b[i]=j;
			Bool[j]=1;
			if(i==n)	inKQ();
			else		Try(i+1);
			Bool[j]=0;
		}
	}
}

void solve(){
	cin >> n >> x;
	for ( int i = 0 ; i <n; i++)
		for( int  j= 0 ; j<n; j++)	cin >> a[i][j];
	Try(1);
	cout << z << endl;
	for ( int i = 0; i<z; i++){
		for ( int j = 1; j<=n; j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
		solve();
}
//NV Than

