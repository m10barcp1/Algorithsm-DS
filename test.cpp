#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,a[100005];
        cin>>n>>k;
        long long run=0,id=0, check =0,check1=0;
        for(int i =0;i<n;i++){
            cin>>a[i];
            if(a[i]==0)
                check1=1;
        }
        if(k==0 &&check1==1 )
            cout<<"YES"<<endl;
        else if(k==0 && check1==0)
            cout<<"NO"<<endl;
        else {
            for(int i =0;i<n;i++){
                run+= a[i];
                while(run- a[id] >=k){
                    run-=a[id];
                    id++;
                }
                if(run ==k ){
                    cout<<"YES"<<endl;
                    check =1;
                    break;
                }
            }
            if(check ==0)
                cout<<"NO"<<endl;
        }
    }
}
