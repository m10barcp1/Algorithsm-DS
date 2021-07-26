#include<bits/stdc++.h>
using namespace std;
vector<char> x[20000], y[20000];
char a[20000], b[20000];
int vt = 0, vt2=0, n;
int check[260];
void sinh(int i)
{
	for(int j=0;j<n;j++)
	{
		if(check[j+'A']==0) 
		{
			a[i] = j+'A';
			check[j+'A'] = 1;
			if(i==n)
			{
				for(int k=1;k<=n;k++) x[vt].push_back(a[k]);
				vt++;
			}
			else sinh(i+1);
			check[j+'A'] = 0;
		}
	}
}
void sinhS(int i)
{
	for(int j=0;j<n;j++){
		b[i] = j + '1';
		if(i==n)
		{
			for(int k=1;k<=n;k++) y[vt2].push_back(b[k]);
			vt2++;
		}
		else sinhS(i+1);
	}
}

void inC(){
	for(int i=0;i<vt;i++)
	{
		
		for(int j=0;j<vt2;j++)
		{
			for(int k=0;k<x[i].size();k++) cout<<x[i][k];
			for(int k=0;k<y[j].size();k++) cout<<y[j][k];
			cout<<endl;
		}
	}
}

int main() {
	cin>>n;
	sinh(1);
	sinhS(1);
	inC();
	return 0;
}
