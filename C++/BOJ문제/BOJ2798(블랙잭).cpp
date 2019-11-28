#include<iostream>

using namespace std;
int N,M;
int card[100];
bool visit[100]={false,};
int result = 0;
void dfs(int b,int sum){
	if(b==3){
		if(sum<=M){
			if(sum>result)result=sum;
		}
		return;
	}
	for(int i=0;i<N;i++){
		if(!visit[i]){
			visit[i]=true;
			dfs(b+1,sum+card[i]);
			visit[i]=false;
		}
	}
	
}

int main(){
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>card[i];
	}
	dfs(0,0);
	cout<<result;
}
