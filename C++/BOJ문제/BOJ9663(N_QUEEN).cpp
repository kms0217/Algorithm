#include<iostream>

using namespace std;
int n,result=0;
int up[50]={0,},down[50]={0,},queen[16]={0,};
void sol(int a){
	if(a>n){
		result++;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!queen[i]&&!up[i-a]&&!down[i+a]){
			queen[i]=up[i-a]=down[i+a]=1;
			sol(a+1);	
			queen[i]=up[i-a]=down[i+a]=0;
		}
	}
	
}

int main(){
	cin>>n;
	sol(1);
	cout<<result;
}
