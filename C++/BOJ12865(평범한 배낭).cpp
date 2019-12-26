#include<iostream>
#include<algorithm> 
using namespace std;

int N,K; 
int dp[101][100001];   //dp[i][j] : i번째 물건까지 확인 / 무게 j일때의 최대 가치 
int V[101],W[101];

int main(){
	cin>>N>>K;
	for(int i=1;i<=N;i++)
		cin>>W[i]>>V[i];
	for(int i=1;i<=N;i++){
		for(int j=1;j<=K;j++){
			dp[i][j]=dp[i-1][j];
			if(j==W[i])dp[i][j]=max(dp[i][j],V[i]);
			else if(j>W[i]) dp[i][j]=max(dp[i][j],dp[i-1][j-W[i]]+V[i]);
		}
	}	
	cout<<dp[N][K]<<endl;
}


//Memory 41440 KB   시간 16ms 
