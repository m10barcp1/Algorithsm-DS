#include<bits/stdc++.h>
using namespace std;
long long f[10005];
void tinh(){
	long long uoc2 = 2, uoc3 = 3, uoc5 = 5, dem2 = 0, dem3 = 0, dem5 = 0, res = 1;
	f[0] = res;
	for ( long long i = 1; i<10000; i++){
		res = min(uoc2,min(uoc3,uoc5));
		f[i] = res;
		if(res == uoc2){
			dem2++;
			uoc2 = f[dem2]*2;
		}
		if(res == uoc3){
			dem3++;
			uoc3 = f[dem3]*3;
		}
		if(res == uoc5){
			dem5++;
			uoc5 = f[dem5]*5;
		}
		
	}
}

void solve(){
	long long n;
	cin >> n;
	cout << f[n-1] << endl;
}
int main(){
	int t;
	cin >> t;
	tinh();
	while(t--){
		solve();
	}
}
