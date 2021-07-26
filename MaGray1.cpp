#include<bits/stdc++.h>
using namespace std;

int a[100],n;
void inkq(){
	for ( int i = 1; i<=n; i++){
		cout << a[i];
	}
	cout << " ";
}
void gray(int i){
	int dem = 0;
	for ( int j = 1; j<i; j++){
		if(a[j]) dem++;
	}
	if(dem%2==0) {
		for ( int j = 0; j<=1; j++){
			a[i] = j;
			if(i==n) inkq();
			else gray(i+1);
		}
	}else{
		for ( int j = 1; j>=0; j--){
			a[i] = j;
			if(i==n) inkq();
			else gray(i+1);
		}
	}
}

void solve(){
	cin >> n;
	gray(1);
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



