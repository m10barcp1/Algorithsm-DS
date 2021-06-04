#include <bits/stdc++.h>
using namespace std;
void solve(){
		long long n,l,r, res = 0, check = 0;
        cin >> n >> l >> r;
        vector<int> a;
        while(n!=1){
            a.push_back(n%2);
            n/=2;
        }
        if(l%2 == 0 && r%2 == 0) {
			res+= (r-1-l-1)/2+1;
		}else if(l%2 == 1 && r%2 == 0) {
				res+= (r-1-l)/2+1;
			}
        else if(l%2 == 0 && r%2 == 1) {
				res += (r-l-1)/2+1;
			}
        else{
			res= (r-l)/2+1;
		}
        for(int i = a.size() - 1; i >= 0; i--){
            if(a[i] == 1){
                long long init = pow(2,a.size()-i);
                long long distance = pow(2,a.size()-i+1);
                long long quantityL = 0;
                long long quantityR = 0;
                if(l-init>=0){
                    if((l-init)%distance==0) check = 1;
                    quantityL = (l-init)/distance +1;
                    quantityR = (r-init)/distance +1;
                }else if(r-init>=0){
                    quantityR = (r-init)/distance +1;
                }
                res+=quantityR-quantityL;
            }
        }
        if(check == 1) res++;
        cout<<res<<endl;
}
int main (){
    int T;
    cin>>T;
    while(T--){
        solve();
   }
}
//NV Than
// Idea: Các so le luôn là 1, tính tong các so dó trong l-r (*)
//       Tìm ra quy luat là (2^i) so là vi trí các so "du" khi chia n cho 2 toi het
//       Còn khoang cách là (2^(i+1)) giua các so dó
//       Thu tung so, tính các so trong khoang day bang công thuc (**) (tính tat ca các so tu init toi r - di các so tu init toi l)

