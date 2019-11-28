#include<iostream>
#define Mo 1000000000
using namespace std;

long long mem[101][10];

int main(){
	int N;
	cin>>N;
	for(int i=1;i<10;i++)
		mem[1][i]=1;
	for(int i=2;i<=N;i++){
		mem[i][0]=mem[i-1][1]%Mo;
		for(int j=1;j<9;j++)
			mem[i][j]=(mem[i-1][j-1]%Mo+mem[i-1][j+1]%Mo)%Mo;
		mem[i][9]=mem[i-1][8]%Mo;
	}
	long long result=0;
	for(int i=0;i<10;i++)
		result+=mem[N][i];
	cout<<result%Mo;
}
