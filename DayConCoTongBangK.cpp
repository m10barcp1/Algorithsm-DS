#include <bits/stdc++.h>
using namespace std;


int b[100], n, p, s,arr[1000];
vector<int> a;
int ok;
bool isPrime( int n){
	if(n<2) return false;
	for (int i = 2; i<=sqrt(n); i++) 
		if(n%i == 0) return false;
	return true;
}
void in(){
	cout << ok << endl;
	for ( int i = 0; i<n; i++){
		cout << b[i] << " ";
	}
	cout << endl;
}
void Try(int N, int M, int sum){
	for (int i = N; i<a.size(); i++){
		b[M] = a[i];
		if(sum + b[M] == s && M+1 == n) {
			ok++;
			in();
		}else{
			if(sum+b[M] < s){
				Try(i+1,M+1, sum + b[M]);
			}
		}
	}
}
void sangNT ()
{
    for (long i=2; i<=200; i++)
    {
        if (arr[i]==1)
        {
            for (long j=2; j<=200/i; j++)
            { 
                arr[j*i]=0;
            }
        }
    }
    for ( int i  = p; i<=s; i++){
    	if(arr[i] == 1) a.push_back(i);
	}
}
void solve(){
	cin >> n >> p >> s;
	ok = 0;
	sangNT();
	Try(0,0,0);
	if(!ok) cout << "-1" << endl;
	else cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

