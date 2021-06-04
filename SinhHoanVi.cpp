#include<bits/stdc++.h>
using namespace std;
int n,c[10];
void bandau(int n){
    for ( int i = 1; i<=n; i++)
        c[i] = i;
}
void in(int n){
    for ( int i = 1; i<=n; i++)
        cout << c[i];
}

void nhiphan(int n){
    bandau(n);
    bool ok = false;
    while(!ok){
        in(n);
        sinh(n,ok);
        cout << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	cin >> n;
    	nhiphan(n);
	}
}
