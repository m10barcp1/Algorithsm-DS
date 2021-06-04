#include<bits/stdc++.h>
using namespace std;

void solve(){
	priority_queue<int,vector<int>,greater<int>> a;
	int n;
	cin >> n;
	int tmp;
	for ( int i = 0; i<n; i++){
		cin >> tmp;
		a.push(tmp);
	}
	long long check = 0;
	int first,second;
	while(a.size() > 1){
		first = a.top();
		a.pop();
		second = a.top();
		a.pop();
		check += first + second;
		a.push(first+second);
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


