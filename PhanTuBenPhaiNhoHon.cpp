#include<bits/stdc++.h>
using namespace std;

vector<int> a;
stack <int> b;
int res1[1000005]={0};
int res2[1000005]={0}; 
void sol1(int arr[]){
    while(!b.empty()) b.pop();
    for (int i = a.size()-1; i >= 0; i--){
        if(b.empty()){
            b.push(i);
            arr[i] = -1;
            continue;
        } 
        while(a[i] >= a[b.top()] && !b.empty()){
            b.pop();
            if(b.empty()) break;
        }
        if(!b.empty()){
            arr[i] = b.top();
        }
        else arr[i] = -1;
        b.push(i);
    }
}

void sol2(int arr[]){
    while(!b.empty()) b.pop();
    for(int i = a.size()-1; i >= 0; i--){
        if(b.empty()){
            b.push(i);
            arr[i] = -1;
            continue;
        } 
        while(a[i] <= a[b.top()] && !b.empty()){
            b.pop();
            if(b.empty()) break;
        }
        if(!b.empty()){
            arr[i] = b.top();
        }
        else arr[i] = -1;
        b.push(i);
    }
}

int main (){
    int T;
    cin>>T;
    while(T--){
        int n, tmp;
        cin>>n;       
        for(int i = 0; i < n; i++){
            cin>>tmp;
            a.push_back(tmp);
        }
        sol1(res1);
        sol2(res2);
        for(int i = 0; i < n; i++){
            if(res1[i] != -1 && res2[res1[i]] != -1) cout<<a[res2[res1[i]]]<<" ";
            else cout<<"-1"<<" ";
        }
        a.clear();
        cout<<endl;
   }
    return 0;
}
// NV Than



