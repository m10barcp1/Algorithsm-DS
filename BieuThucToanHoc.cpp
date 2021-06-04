#include <bits/stdc++.h>

using namespace std;
int a[5], dem = 0;
int tong;
void Try(int i){
    if(i == 5){
        if(tong == 23) dem++;
    }
    else
    for(int j = 1; j <= 3; j++){
        if(j == 1) tong += a[i];
        if(j == 2) tong -= a[i];
        if(j == 3) tong *= a[i];
        Try(i+1);
        if(j == 1) tong -= a[i];
        if(j == 2) tong += a[i];
        if(j == 3) tong /= a[i];
    }
}
void solve(){
		for(int i = 0; i < 5; i++) cin>>a[i];
    	sort(a,a+5);
        do{
            tong = a[0];
            Try(1);
        }
        while(next_permutation(a,a+5));
        if(dem) cout << "YES";
        else cout << "NO";
        dem = 0;
        cout << endl;
}
int main (){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
}
