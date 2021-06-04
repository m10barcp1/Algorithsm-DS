#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	if(n%2==1) a[n++] = 0;
	sort(a,a+n);
	long long x = 0,y = 0;
	for ( int i = 0; i<n; i++){
	x = x*10+ a[i++];
	y = y*10+ a[i];
	}
	cout << x+y << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


