#include<iostream>

using namespace std;

long long  mem[101]={0,};
int main(){
	ios_base::sync_with_stdio(false);
	int T,N;
	cin>>T;
	mem[1]=1;
	mem[2]=1;
	for(int i=3;i<=100;i++)
		mem[i]=mem[i-2]+mem[i-3];
	while(T--){
		cin>>N;
		cout<<mem[N]<<'\n';
	}
}
