#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int t; 
    cin >> t;
    cin.ignore();
    string s;
    vector<int> a;
    while(t--){
    	cin >> s;
        if(s=="PUSH"){
            cin>>n;
            a.push_back(n);        
        }
        else if (s=="POP"&&!a.empty())
            a.pop_back();
        if(s=="PRINT"){
            if(!a.empty())
                cout<<a[a.size()-1]<<endl;
            else
                cout<<"NONE"<<endl;
        }
    }
    
}
