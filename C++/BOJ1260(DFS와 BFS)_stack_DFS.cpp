#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<cstring>
using namespace std;

int n,m,v;
int map[1001][1001],visit[1001];
void DFS(){
	stack<int> st;
	st.push(v);
	while(!st.empty()){
		int x=st.top();st.pop();
		if(!visit[x]){
			cout<<x<<" ";
			visit[x]=1;
		}else continue;
		for(int i=n;i>=1;i--){
			if(!visit[i]&&map[x][i])
				st.push(i);
		}
	}
	cout<<endl;
}
void BFS(){
	queue<int> q;
	q.push(v);
	visit[v]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		cout<<x<<" ";
		for(int i=1;i<=n;i++){
			if(map[x][i]&&!visit[i]){
				visit[i]=1;
				q.push(i);
			}
		}
	}
	cout<<endl;
}

int main(){
	cin>>n>>m>>v;
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		map[a][b]=map[b][a]=1;
	}
	DFS();
	memset(visit,0,sizeof(visit));
	BFS();
	return 0;
}
