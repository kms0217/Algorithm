#include<iostream>
#define mmax(x,y) (x>y ? x:y)
using namespace std;
int mem[1001];
int num[1001];
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>num[i];
		int maxn=0;
		for(int j=0;j<i;j++)
			if(num[j]<num[i])maxn=mmax(maxn,mem[j]);
		mem[i]=maxn+1;
	}
	int Max=0;
	for(int i=0;i<N;i++){
		Max=mmax(mem[i],Max);
	}
	cout<<Max;
}
