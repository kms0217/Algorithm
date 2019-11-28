#include<iostream>
#include<algorithm>
#define abs(a) (a>0? (a):-(a))
using namespace std;

int n,team[20][20];
int result=9999999;
bool visit[20];

void sol(int a,int pair){
	if(pair==n/2){
		int A=0,B=0;
		for(int i=0;i<n;i++){
			if(visit[i]){
				for(int j=0;j<n;j++){
					if(visit[j])
						A+=team[i][j];
				}
			}
			else{
				for(int j=0;j<n;j++){
					if(!visit[j])
						B+=team[i][j];
				}
			}
		}
		result=min(result,abs(A-B));
		return;
	}
	for(int i=0;i<n;i++){
		if(!visit[i]&&a<i){
			visit[i]=true;
			sol(i,pair+1);
			visit[i]=false;
		}
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>team[i][j];
	sol(0,0);
	cout<<result;		
}
