#include<iostream> 
#include<algorithm>
using namespace std;

char map[50][50];
int N,M;
int Min=2500;
int main(){
	cin>>N>>M;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>map[i][j];
		}
	}
	int x=0,y=0;
	while(x+7<N){
		int temp=0;
		for(int i=x;i<x+8;i++){
			for(int j=y;j<y+8;j++){
				char comp;
				if((i+j)%2==0)comp='W';
				else comp='B';
				if(map[i][j]!=comp)temp++;
			}
		}
		temp=min(temp,64-temp);
		Min=min(temp,Min);
		if(y+8>=M){
			y=0;
			x++;
		}
		else y++;
	}
	cout<<Min;
}
