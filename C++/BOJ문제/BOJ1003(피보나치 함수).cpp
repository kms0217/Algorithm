#include<iostream>

using namespace std;
long long mem[41][2];
int main(){
	int T,N;
	cin>>T;
	mem[0][0]=1;
	mem[0][1]=0;
	mem[1][0]=0;
	mem[1][1]=1;
	for(int i=2;i<=40;i++){
		mem[i][0]=mem[i-1][0]+mem[i-2][0];
		mem[i][1]=mem[i-1][1]+mem[i-2][1];
	}	
	while(T--){
	cin>>N;
	cout<<mem[N][0]<<" "<<mem[N][1]<<'\n';
	}	
}
