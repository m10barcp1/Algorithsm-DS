#include <bits/stdc++.h>
using namespace std;
string add(string a, string b, int k){
    string res="";
    while(a.length() < b.length()) a="0"+a;
    while(b.length() < a.length()) b="0"+b;
    int carry=0;
    for(int i=a.length()-1;i>=0;i--){
        int tmp=a[i]-48 + b[i]-48 + carry;
        carry=tmp/k;
        tmp=tmp%k;
        res=(char)(tmp+48)+res;
    }
    if(carry>0) res="1"+res;
    return res;
}
void solve(){
	int k;
    string a,b;
    cin >> k >> a >> b;
    cout << add(a,b,k);
    cout << endl;
}
int main (){
    int t;
    cin >> t;
    while(t--){
    	solve();
	}
}
//NV Than
