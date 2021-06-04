#include<bits/stdc++.h>
using namespace std;

long long fibo[100];
void init(){
	
	fibo[1] = 1;
	fibo[2] = 1;
	for (int i = 3; i<=92; i++) fibo[i] = fibo[i-1] + fibo[i-2];
}

char res(long long n, long long k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k<=fibo[n-2]) return res(n-2,k);
	return res(n-1,k-fibo[n-2]);
}

void solve(){
	long long n, k;
	cin >> n >> k;
	cout << res(n,k) << endl;
}

int main(){
	int t;
	cin >> t;
	init();
	while(t--){
		solve();
	}
}
// NV Than

