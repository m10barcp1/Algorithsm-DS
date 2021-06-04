#include <bits/stdc++.h>
using namespace std;
long long a;
void solve(){
	cin >> a;
	long long b[10000];
	long long n = 0, m = 0, d = 0;
	b[0] = 9;
	if(b[0]%a==0) d = b[0];
	else{
		while(d==0){
			n+=2;
			b[n-1] = b[m]*10;
			if(b[n-1]%a==0){
				d = b[n-1];
				break;
			}
			b[n] = b[n-1] + 9;
			if(b[n] % a == 0){
				d = b[n];
				break;
			}
			m++;
		}
	}
	cout << d << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than
