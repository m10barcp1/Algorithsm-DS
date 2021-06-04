#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int check  = n;
	vector<int> a(n);
	for ( int i = 0; i<n; i++)	cin >> a[i];
	while(check>2){
            sort(a.begin(),a.end());
            a[check-2]=a[check-1]-a[check-2];
            a.pop_back();
            check = a.size();
    }
    if(a[0] == a[1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


