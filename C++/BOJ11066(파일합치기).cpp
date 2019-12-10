#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int dp[501][501];   //dp[i][j]  i~j까지 더했을때 최소값 
int sum[501];     //dp[i][k]+dp[k][j]+sum[j]-sum[i-1]   i~k구간 최소 k~j구간 최소를 다시 합쳐야하므로 sum추가해줘야함 

int solve(int left,int right){
	int &ret=dp[left][right];
	if(ret!=-1)return ret;
	ret=999999999;
	for(int i=left;i<right;i++){
		ret=min(ret,solve(left,i)+solve(i+1,right)+sum[right]-sum[left-1]);
	}
	return ret;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,k;
	cin>>t;
	while(t--){
		cin>>k;
		//memset(dp,-1,sizeof(dp));
		for(int i=0;i<=k;i++){
			for(int j=0;j<=k;j++)
				dp[i][j]=-1;
		}
		dp[0][0]=0;
		vector<int> vec(k+1);
		for(int i=1;i<=k;i++){
			cin>>vec[i];
			sum[i]=vec[i];
			sum[i]+=sum[i-1];
			dp[i][i]=0;
		}
		cout<<solve(1,k)<<"\n";
	}
	
}
