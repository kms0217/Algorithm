#include<iostream>

#define mmax(x,y) (x>y? x:y)
using namespace std;

int mem[500][500];

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++){
			cin>>mem[i][j];
		}
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i+1;j++){
			if(j==0)
				mem[i][j]+=mem[i-1][j];
			else if(j==i)
				mem[i][j]+=mem[i-1][j-1];
			else
				mem[i][j]+=mmax(mem[i-1][j-1],mem[i-1][j]);
		}
	}

	int result=0;
	for(int i=0;i<n;i++)
		result=mmax(result,mem[n-1][i]);
	cout<<result;
}
