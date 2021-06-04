#include<bits/stdc++.h>
using namespace std;
void print(int *a, int k){
	for ( int i = 1; i<=k; i++) cout << a[i];
}

void sinh(int *a,int n, bool &ok, int k){
	int i = k;
	while(i>0&& a[i]==n-k+i) i--;
	a[i]++;
	if(i>0){
		for ( int j=i+1; j<=n; j++) a[j] = a[i]+j-i;
	}else ok = true;
}

void solve(){
	int n,k;
	cin >> n >>  k;
	int a[n+1];
	for ( int i = 1; i<=k; i++)	a[i] = i;
	bool ok=false;
	while(!ok){
		print(a,k);
		sinh(a,n,ok,k);
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
