#include<iostream>
#include<algorithm> 
using namespace std;

int N,K; 
int dp[2][100001];   //dp[i][j] : i��° ���Ǳ��� Ȯ�� / ���� j�϶��� �ִ� ��ġ 
int V[101],W[101];

int main(){
	int flag=0;
	cin>>N>>K;
	for(int i=1;i<=N;i++)
		cin>>W[i]>>V[i];
		
	for(int i=1;i<=N;i++){
		flag++;
		for(int j=1;j<=K;j++){
			dp[flag%2][j]=dp[(flag+1)%2][j];
			if(j==W[i])dp[flag%2][j]=max(dp[flag%2][j],V[i]);
			else if(j>W[i]) dp[flag%2][j]=max(dp[flag%2][j],dp[(flag+1)%2][j-W[i]]+V[i]);
		}
	}	
	cout<<dp[flag%2][K]<<endl;
}

//Memory ���  2764KB // �ð� 16 ms 
