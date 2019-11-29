#include<iostream>

using namespace std;

int adj[128][128];
int W=0,B=0,n;

void solv(int x,int y,int size){
	if(size==1){
		if(adj[y][x]==0)
			W++;
		else
			B++;
		return;
	}
	bool flag=false;
	for(int i=y;i<y+size;i++){
		for(int j=x;j<x+size;j++){
			if(adj[y][x]!=adj[i][j])flag=true;
		}
		if(flag)break;
	}
	if(flag){		
		solv(x,y,size/2);
		solv(x+size/2,y,size/2);
		solv(x,y+size/2,size/2);
		solv(x+size/2,y+size/2,size/2);
	}
	else if(adj[y][x]==0)W++;
	else B++;

}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>adj[i][j];
	solv(0,0,n);
	cout<<W<<endl<<B;			
}
