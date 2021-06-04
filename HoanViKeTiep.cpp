#include<bits/stdc++.h>
using namespace std;

void print(int a,int n){
	for ( int i = 1; i<=n; i++)	cout << a[i];
}
void sinh(char *a, int n, bool &oke){
	int i = n;
	while(i>0 && a[i] == 'B') i--;
	a[i] = 'B';
	if(i>0){
		for ( int j = i+1; j<=n; j++){
			a[j] = 'A';
		}
	}else oke = true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char a[n+1];
		for ( int i = 1; i<=n; i++) a[i] = 'A';
		bool oke = false;
		while(!oke){
			print(a,n);
			sinh(a,n,oke);
			cout << " ";
		}
		cout << endl;
	}
}

