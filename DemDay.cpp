#include<bits/stdc++.h>
using namespace std;

#define M 123456789

long long power(long long n, long long k){
	long long res = 1;
    while(k>0){
        if(k%2!=0) 
		res=(res%M*n%M)%M;
        n = (n%M*n%M)%M;
        k/=2;
    }
    return res;
}

void solve(){
	long long n;
	cin >> n;
	cout << power(2,n-1) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


