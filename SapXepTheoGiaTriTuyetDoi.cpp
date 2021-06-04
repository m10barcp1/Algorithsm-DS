#include<bits/stdc++.h>
using namespace std;

void arrange(int a[], int n, int x) { 
    for ( int i = 1; i<n; i++){
    	int temp = abs(a[i] - x);
    	int j = i - 1;
    	if(abs(a[j]-x) > temp){
    		int k = a[i];
    		while(abs(a[j]-x)>temp && j>=0){
    			a[j+1] = a[j];
    			j--;
			}
			a[j+1] = k;
		}
	}
}
void solve(){
	int n,x;
	cin >> n >> x;
	int a[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	arrange(a,n,x);
	for ( int i = 0; i<n; i++) cout << a[i] << " ";
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

