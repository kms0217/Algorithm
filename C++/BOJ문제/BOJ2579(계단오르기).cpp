#include<iostream>
#define mmax(x,y) (x>y ? x:y)
using namespace std;

int mem[301][2];

int main(){
	int N;
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>mem[i][0];
		mem[i][1]=mem[i][0];
	}
	mem[1][1]=0;
	mem[2][0]+=mem[1][0];
	
	for(int i=3;i<=N;i++){
		mem[i][0]+=mem[i-1][1];
		mem[i][1]+=mmax(mem[i-2][1],mem[i-2][0]);
	}

	cout<<mmax(mem[N][0],mem[N][1]);
}
