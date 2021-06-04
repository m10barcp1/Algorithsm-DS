#include<bits/stdc++.h>
using namespace std;
const long long M = 1e9+7;
long long power(long long a, long long b){
	if(b == 1) return a%M;
    long long res = power(a,b/2);
    res = res*res%M;
    if(b%2==1) return res*a%M;
    return res;
}
	
void solve(){
	long long n,k;
	cin >> n >> k;
	cout << power(n,k) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


