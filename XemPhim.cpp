#include<bits/stdc++.h>
using namespace std;

int n,a[100005] ,sum;
void totalS(int *f){
	f[sum] = 0; f[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = sum; j >= a[i]; j--){
            if(f[j] == 0 && f[j-a[i]] == 1 ) f[j]=1;
        }
    }
    for ( int i = sum; i>=0; i--){
    	if(f[i]) {
    		cout << i << endl;
    		return;
		}
	}
	
	
}

void solve(){
	int f[100005] = {0};
	cin >> sum >> n;
	for ( int i = 1; i<=n; i++)	cin >> a[i];
	totalS(f);
}

int main(){
		solve();
}
// NV Than
