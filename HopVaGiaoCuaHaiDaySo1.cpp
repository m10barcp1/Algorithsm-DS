#include<bits/stdc++.h>
using namespace std;



void solve(){
	int n,m;
	cin >> n >> m;
	set<int> z;
	set<int> ::iterator it;
	int a[n],b[m];
	for ( int i = 0; i<n; i++)	{
		cin >> a[i];
		z.insert(a[i]);
	}
	for ( int i = 0; i<m; i++)	{
		cin >> b[i];
		z.insert(b[i]);
	}
	for ( it = z.begin(); it != z.end(); it++) cout << *it << " ";
	cout << endl;
	int k=0;
	for(int i=0;i<n;i++){
        while(a[i]>b[k]&&k<m){
			k++;
		}
		if(a[i]==b[k]){
			cout<<a[i]<<" ";
		}
    }
        cout<<endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than
