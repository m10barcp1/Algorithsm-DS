#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int check = 1;
        int n;
        vector<int> v[100];
        cin>>n;
        int k = 1;
        int p = 0;
        int a[100];
    	v[p].push_back(n);
        while(check){
            
            cout<<")"<<" ";
            int i=k,j,r,t,tmp;
            while(i>0 && a[i] == 1) i--;
            if(i>0){
                a[i] -=1;
                tmp = k-i+1;
                r = tmp/a[i];
                t = tmp%a[i];
                k=i;
                if(r>0){
                    for(j = i+1; j <= i+r; j++) a[j] = a[i];
                    k += r;
                }
                if(t>0){
                    k+=1;
                    a[k] = t;
                }
                p++;
                for(int i = 1; i <= k; i++){
             	   	v[p].push_back(a[i]);
            	}
            }
            else check = 0;
        }
        for ( int i = 0; i<p; i++){
        	cout << "(";
        	for ( int j = 0; j<v[i].size(); j++){
        		if(i!=v[i].size()-1){
        			cout << v[i][j] << " ";
				}else cout << v[i][j];
			}
			cout << ")";
		}
        cout<<endl;
    }
}
