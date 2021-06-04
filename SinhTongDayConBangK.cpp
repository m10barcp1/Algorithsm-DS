#include <bits/stdc++.h>
using namespace std;

int a[25], b[100], n, x, c[100][100], size[100], k = 0;
bool ok;
void in(int M){
	for ( int i = 0; i<M; i++){
		c[k][i] = b[i];
	}
	size[k] = M;
	k++;
}
void Try(int N, int M, int sum){
	for (int i = N; i<n; i++){
		b[M] = a[i];
		if(sum + b[M] == x) {
			ok = true;
			in(M+1);
		}else{
			if(sum+b[M] < x){
				Try(i+1,M+1, sum + b[M]);
			}
		}
	}
}
void solve(){
	cin >> n >> x;
	for ( int i = 0; i<n; i++) cin >> a[i];
	sort(a,a+n);
	Try(0,0,0);
	for ( int i = k-1 ;i>=0; i--){
		for ( int j = 0; j<size[i]; j++){
			cout << c[i][j] << "                    ";
		}
		cout << endl;
	}
	cout << k;
}

int main(){
		solve();
}
// NV Than
