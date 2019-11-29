#include<iostream>
#include<vector>
#include<algorithm>
#define MAX 0xffffffff

int sum[501];
unsigned int mem[501][501];
int cost[501];
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int k;
		cin>>k;
		for(int i=1;i<=k;i++){
			cin>>cost[i];
			sum[i]=sum[i-1]+cost[i];
		}
		for(int mid=0;mid<k;mid++){
			for(int i=1;i+mid<=k;i++){
				int x=i;
				int y=x+mid;
				mem[x][y]=MAX;
				for(int j=x;j<=y;j++){
					mem[i][j]=min(mem[i][j],mem[i][mid]+mem[mid+1][j]+sum[j]-sum[i-1]);
				}
			}
		}
		for(int i=0;i<=k;i++){
			for(int j=0;j<=k;j++){
				cout<<mem[i][j]<<" ";
			}
			cout<<endl;
		}
		
		
		
		cout<<mem[1][k]<<endl;
	}
	
}
