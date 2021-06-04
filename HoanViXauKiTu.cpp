#include<bits/stdc++.h>
using namespace std;
int n;
char c[11];
void bandau(int n, char *c){
    for ( int i = 1; i<=n; i++)
        c[i] = 'A'+i-1;
}
void in(int n, char *c){
    for ( int i = 1; i<=n; i++)
        cout << c[i];
}
void sinh(int n, bool &ok, char *c){
    int i = n-1;
    while(i>0 && c[i] > c[i+1]) i--;
    if(i<=0) ok = true;
    else{
        int k = n;
        while(c[i] > c[k]) k--;
        swap(c[k],c[i]);
        int l = i + 1, r = n;
        while( l < r){
            swap(c[l],c[r]);
            l++; r--;
        }
    }
}
void nhiphan(int n,char *c){
    bandau(n,c);
    bool ok = false;
    while(!ok){
        in(n,c);
        sinh(n,ok,c);
        cout << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	cin >> n;
    	nhiphan(n,c);
	}
}
