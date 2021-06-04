#include<bits/stdc++.h>
using namespace std;
int n, a[100];
void in(){
	for ( int i = 1; i<=n; i++){
		if(a[i])cout << "H";
		else cout << "A";
	}
	cout << endl;
}

bool test(){
	if(!a[1]) return 0;
	if (a[n]) return 0;
	for ( int i = 2; i<=n; i++) 
		if(a[i]&&a[i-1]) return 0;
	return 1;
}


void Try(int i){
	for ( int j = 0; j<=1; j++){
		a[i] = j;
		if(i==n){
			if(test()) in();
		}else
			Try(i+1);
	}
}

void solve(){
	cin >> n;
	for(int i=0;i<=n;i++) a[i]=0;
	Try(1);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



