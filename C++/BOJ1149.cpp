#define mmin(x,y) (x>y? y:x) 
#include<iostream>


using namespace std;

int N,cost[1001][3],mem[1001][3];

int main(){
	cin>>N;
	for(int i=1;i<=N;i++){
		int r,g,b;
		cin>>r>>g>>b;
		cost[i][0]=r;
		cost[i][1]=g;
		cost[i][2]=b;
	}
	for(int i=1;i<=N;i++){
		mem[i][0]=mmin(mem[i-1][1],mem[i-1][2])+cost[i][0];
		mem[i][1]=mmin(mem[i-1][0],mem[i-1][2])+cost[i][1];
		mem[i][2]=mmin(mem[i-1][0],mem[i-1][1])+cost[i][2];
	}
	cout<<mmin(mem[N][0],mmin(mem[N][1],mem[N][2]));
}
