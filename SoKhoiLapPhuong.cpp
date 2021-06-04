#include <bits/stdc++.h>
using namespace std;
vector<long long> preCompute;
void generate(){
    for(long long i = 1; i <= 1e6+7; i++){
        long long temp = i*i*i;
        preCompute.push_back(temp);
    }
}
int main (){
    int T;
    cin>>T;
    generate();
    while(T--){
        long long n;
        cin>>n;
        string stringN = to_string(n);
        reverse(preCompute.begin(), preCompute.end());
        int checkall = 0;
        for(int i = 0; i < preCompute.size(); i++){
            if(preCompute[i] > n) continue;
            int kt = 0;
            int check = 0;
            string checkS = to_string(preCompute[i]);
            for(int j = 0; j < stringN.size(); j++){
                if(stringN[j] == checkS[check]){
                    check++;
                }
                if(check == checkS.size()) kt = 1;
            }
            if(kt == 1){
                cout<<checkS<<endl;
                checkall=1;
                break; 
            }
        }
        if(!checkall) cout<<"-1"<<endl;   
   }
}
