#include<bits/stdc++.h>
using namespace std;

int a[100000];
int n,x;
int location (int low, int high){
	int mid ;
	if(low>high) return 0;
	else{
		mid = (low+high)/2;
		if(x==a[mid]) return mid;
		else if (x<a[mid]) return location(low,mid-1);
		else return location(mid+1,high);
	}
}


void solve(){
	cin >> n >> x;
	for ( int i = 1; i<=n; i++)	cin >> a[i];
	if(location(1,n)!=0) cout << location(1,n);
	else cout << "NO";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


