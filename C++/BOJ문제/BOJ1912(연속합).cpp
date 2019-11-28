#include<iostream>
#include<vector>
#include<algorithm>
#define mmax(x,y) (x>y?x:y)
using namespace std;

int main(){
	int N;
	cin>>N;
	int Max;
	vector<int> mem;
	for(int i=0;i<N;i++){
		int x;
		cin>>x;
		mem.push_back(x);
	}
	Max=mem[0];
	for(int i=1;i<N;i++){
		mem[i]=mmax(mem[i-1]+mem[i],mem[i]);
		Max=mmax(Max,mem[i]);
	}
	cout<<Max;
}
