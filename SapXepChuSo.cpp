#include<bits/stdc++.h>
#include<set>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	set<int> s;
	set<int> :: iterator it;
	for ( int i = 0; i<n; i++)	{
		while(a[i]>0){
			s.insert(a[i]%10);
			a[i]/=10;
		}
	}
	for(it = s.begin();it!=s.end();it++){
		cout << *it << " ";
	}
	cout << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


