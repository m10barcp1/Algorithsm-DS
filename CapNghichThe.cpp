#include <bits/stdc++.h>
using namespace std;
int main (){
    int T;
    cin>>T;
    while(T--){
        vector<int> a;
        int n, tmp;
        cin>>n;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            a.push_back(tmp);
        }
        sort(a.begin(),a.end());
        int mid = n/2;
        int res = n;
        for(int i = 0; i < n/2; i++){
            while(true){
                if(a[i]*2 <= a[mid]){
                    res--;
                    mid++;
                    break;
                }
                else mid++;
                if(mid == n) break;
            }
            if(mid == n) break;
        }
        cout<<res<<endl;
   }
}
