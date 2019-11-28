#include<iostream>
#define mmax(x,y) (x>y? x:y)
using namespace std;
int Max=0;
int num[10001],mem[10001];
int main(){
	int N;
	cin>>N;
	for(int i=1;i<=N;i++)
		cin>>num[i];
	mem[1]=num[1];
	mem[2]=mem[1]+num[2];
	for(int i=3;i<=N;i++){
		mem[i]=mmax(mem[i-1],mmax(mem[i-2]+num[i],mem[i-3]+num[i-1]+num[i]));
	}
	cout<<mem[N];
}
