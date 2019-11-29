#include<iostream>
#define mmin(x,y) (x>y ? y:x)
#define tmin(x,y,z) (mmin(x,mmin(y,z)))
using namespace std;

int mem[1000001];

int main(){
	int N;
	cin>>N;
	mem[2]=1;
	mem[3]=1;
	
	for(int i=4;i<=N;i++){
		if(i%2==0&&i%3==0)
			mem[i]=1+tmin(mem[i-1],mem[i/2],mem[i/3]);
		else if(i%2==0)
			mem[i]=1+mmin(mem[i-1],mem[i/2]);
		else if(i%3==0)
			mem[i]=1+mmin(mem[i-1],mem[i/3]);
		else
			mem[i]=1+mem[i-1];		
	}	
	cout<<mem[N]<<endl;
}
