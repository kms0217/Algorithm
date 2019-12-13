#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int *visit;
int **map;

void DFS(int v,int n){
	int i;
	cout<<v<<" ";
	visit[v]=1;	
		for(i=1;i<n+1;i++){
			if(map[v][i]&&!visit[i]){
				DFS(i,n);
		}
	}
}

void BFS(int v,int n){
	int i;
	queue<int> q;
	q.push(v);
	visit[v]=1;
	while(!q.empty()){
		int a=q.front();
		q.pop();
		cout<<a<<" ";	
		for(i=1;i<n+1;i++){
			if(!visit[i]&&map[a][i]){
				visit[i]=1;
				q.push(i);
			}
		}		
	}
}

int main(){
	int N,M,V,i;
	int a,b;
	cin>>N>>M>>V;
	visit=new int[N+1];
	map=new int*[N+1];
	for(i=0;i<N+1;i++){
		map[i]=new int[N+1];
		memset(map[i],0,sizeof(int)*(N+1));
	}
	for(i=0;i<M;i++){
		cin>>a>>b;
		map[a][b]=map[b][a]=1;
	}
	memset(visit,0,sizeof(int)*(N+1));
	DFS(V,N);
	cout<<endl;
	memset(visit,0,sizeof(int)*(N+1));
	BFS(V,N);
	
	delete []visit;
	for(i=0;i<N+1;i++){
		delete[] map[i];
	}
	delete[] map;
}
