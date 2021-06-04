#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	int t = 0;
	for ( int i = 0; i<n; i++){
		int min = i;
		for ( int j = i+1; j<n; j++){
			if(a[min]>a[j]) min = j;
		}
		if(min>i){
			t++;
			swap(a[i],a[min]);
		}
	}
	cout << t << endl;	
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
//NV Than

