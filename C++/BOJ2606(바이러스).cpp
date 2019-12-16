#include<iostream>
#include<cstring>
#define inf 200000000
using namespace std;

int n,m;
int map[101][101],visit[101],dist[101];

void dijkstra(int start){
	for(int i=1;i<=n;i++)
		dist[i]=inf;
	dist[start]=0;
	for(int i=1;i<=n;i++){
		int mincost=inf,minvertex;
		for(int j=1;j<=n;j++){
			if(!visit[j]&&dist[j]<mincost){
				mincost=dist[j];
				minvertex=j;
			}
		}
		visit[minvertex]=1;
		for(int j=1;j<=n;j++){
			if(map[minvertex][j]&&dist[j]>dist[minvertex]+map[minvertex][j])
				dist[j]=dist[minvertex]+map[minvertex][j];
		}
	}
}

int main(){
	int count=0;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		map[a][b]=map[b][a]=1;
	}
	dijkstra(1);
	for(int i=1;i<=n;i++)
		if(dist[i]!=inf)count++;
	cout<<count-1;  
}
