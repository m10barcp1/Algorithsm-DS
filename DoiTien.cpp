#include<bits/stdc++.h>
using namespace std;
	int n;
void res(int i, int &count){
	if(n>=i){
		int temp = n/i;
		count+=temp;
		n-=i*temp;
	}
}


void solve(){

	cin >> n;
	int count = 0;
	res(1000,count);
	res(500,count);
	res(200,count);
	res(100,count);
	res(50,count);
	res(20,count);
	res(10,count);
	res(5,count);
	res(2,count);
	res(1,count);
	cout << count << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}


