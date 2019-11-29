#include<iostream>

using namespace std;
int dp[1001][1001];

int bi(int n,int k){
	if(n==k||k==0)return 1;
	
	int& result=dp[n][k];
	if(result!=0)
		return result;
	return result=((bi(n-1,k)+bi(n-1,k-1)))%10007;
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<bi(n,k);
}
