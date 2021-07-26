#include <iostream>
using namespace std;

int a[100];
int n;
int Bool[100]={0};

void inKQ()
{
	for(int i=1;i<=n;i++)
	cout<<a[i];
	cout<<" ";
}
void Try(int i)
{
	for(int j=1;j<=n;j++){
	  	if (!Bool[j]){
			a[i]=j;
			Bool [j]=1;
			if(i==n)
			inKQ();
			else
				Try(i+1);
				Bool[j]=0;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
	cin>>n;
	Try(1);
	cout<<endl;
	}

}
