#include<iostream>
#include<algorithm>
using namespace std;
int dp[101][100001];
int W[101],V[101];

int main(){
	int N,K;
	cin>>N>>K;
	for(int i=1;i<=N;i++)
		cin>>W[i]>>V[i];
		
	for(int i=1;i<=N;i++){
		for(int j=1;j<=K;j++){
			dp[i][j]=dp[i-1][j];
			for(int x=0;x<=N;x++){
				for(int y=0;y<=K;y++){
					cout<<dp[x][y]<<" ";
				}cout<<endl;
			}
			cout<<endl;
			if(j-W[i]>=0){
				dp[i][j]=max(dp[i][j],dp[i-1][j-W[i]]+V[i]);
				for(int x=0;x<=N;x++){
				for(int y=0;y<=K;y++){
					cout<<dp[x][y]<<" ";
				}cout<<endl;
			}
			cout<<endl;
			}
		}
	}
	
	cout<<dp[N][K];
}


