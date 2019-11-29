#include<iostream>

using namespace std;

int mem[1000001]={0,};


int main(){
	int N;
	cin>>N;
	mem[1]=1;
	mem[2]=2;
	for(int i=3;i<=N;i++)
		mem[i]=(mem[i-1]%15746+mem[i-2]%15746)%15746;
	cout<<mem[N];
}
