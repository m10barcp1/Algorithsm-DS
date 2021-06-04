#include<bits/stdc++.h>
using namespace std;
const long long m = 1000000000+7;
void solve(){
	priority_queue<long long,vector<long long>,greater<long long>> a;
	long long n;
	cin >> n;
	long long tmp;
	for ( int i = 0; i<n; i++){
		cin >> tmp;
		a.push(tmp);
	}
	long long check = 0;
	long long first,second;
	while(a.size() > 1){
		first = a.top();
		a.pop();
		second = a.top();
		a.pop();
		check =(check+ first + second)%m;
		a.push((first+second)%m);
	}
	cout << check << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
