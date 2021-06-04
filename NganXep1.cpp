#include<bits/stdc++.h>
using namespace std;
// vector<int> vi;
int a[10005];
int main(){
    int n;
    string s;
    vector<int> a;
    while(cin>>s){
        if(s=="push"){
            cin>>n;
            a.push_back(n);        
        }
        else if (s=="pop")
            a.pop_back();
        if(s=="show"){
            if(a.size()!=0)
            for(int t=0;t<a.size();t++)
                cout<<a[t]<<" ";
            else
                cout<<"empty";
            cout<<endl;
        }
    }
    
}
