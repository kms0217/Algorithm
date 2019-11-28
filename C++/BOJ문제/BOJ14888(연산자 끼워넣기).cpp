#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int num[12],n;
bool visit[12]={false,};
int minV=2000000000,maxV=-2000000000;
int g[4]={0,};  //+ - x /

void sol(int result,int index){
	if(index==n-1){
		minV=min(minV,result);
		maxV=max(maxV,result);
		return ;
	}
	for(int i=0;i<4;i++){
		if(g[i]){
			switch(i){
				case 0: 
					g[i]--;
					sol(result+num[index+1],index+1);
					g[i]++;
					break;
				case 1:
					g[i]--;
					sol(result-num[index+1],index+1);
					g[i]++;
					break;
				case 2:
					g[i]--;
					sol(result*num[index+1],index+1);
					g[i]++;
					break;
				case 3:
					g[i]--;
					sol(result/num[index+1],index+1);
					g[i]++;
					break;
					
			}
		}
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>num[i];
	for(int i=0;i<4;i++)
		cin>>g[i];
	sol(num[0],0);
	cout<<maxV<<endl;
	cout<<minV;
}
