#include<bits/stdc++.h>
using namespace std;

void print(int *a,int n, int k){
	
	int count = 0;
	for ( int i = 1; i<=n; i++)	{
		if(a[i] == 1) count++;
	}
	if(count==k)
	{
		for ( int i = 1; i<=n; i++)	cout << a[i];
		cout << endl;
	}
}
void sinh(int *a, int n, bool &oke){
	int i = n;
	while(i>0 && a[i] == 1) i--;
	a[i] = 1;
	if(i>0){
		for ( int j = i+1; j<=n; j++){
			a[j] = 0;
		}
	}else oke = true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n+1];
		for ( int i = 1; i<=n; i++) a[i] = 0;
		bool oke = false;
		while(!oke){
			print(a,n,k);
			sinh(a,n,oke);
		}
	}
}
