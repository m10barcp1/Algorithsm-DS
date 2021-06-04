#include<bits/stdc++.h>
using namespace std;

void solve(){
		int n;
        cin>>n;
        stack<int> res;
        int kt = 0;
        int so7 = 0;
        int tempso7 = 0;
        int check = 0;
        int checkall = 0;
        while(res.size()!=0) res.pop();
        if(n%7==0){
            while(n!=0){
                res.push(7);
                n-=7;
            }
            checkall = 1;
        }
        else
        while(true){
            if(n%4 == 0){
                kt = 1;
                check = n;
                tempso7 = so7;
            }
            if(n >= 7){
                n-=7;
                so7++;
                res.push(7);
            }
            else{
                if(n != 4){
                    if(check != 0){
                        for(int i = 0; i < so7-tempso7; i++){
                            res.pop();
                        }
                        while(check!=0){
                            check-=4;
                            res.push(4);
                        }
                        checkall = 1;
                        break;
                    }
                    else break;
                }
                else{
                    res.push(4);
                    n-=4;
                    checkall = 1;
                }
            }
        }
        if(checkall == 0) cout<<"-1";
        else while(res.size() != 0){
            cout<<res.top();
            res.pop();
        }
        cout<<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than



