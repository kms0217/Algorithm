#include<iostream>
#include<string>
#include<cstring>
#include<cmath>
#include<map>

using namespace std;

int dp[101][101];
int bi(int n,int r){
	if(n==r||r==0)return 1;
	int &result=dp[n][r];
	if(result!=0)
		return result;
	return result=((bi(n-1,r)+bi(n-1,r-1)));
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		memset(dp,0,sizeof(dp));
		string s1,s2;
		map<string,int> m;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>s1>>s2;
			m[s2]++;
		}
		int result=1;
		for(map<string,int>::iterator it=m.begin();it!=m.end();it++){
			result*=bi(it->second+1,1);
		}
		cout<<result-1<<"\n";
	}
}
