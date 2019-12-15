#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int n,m;
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};
char map[1001][1001];
int visit[1001][1001][2];

void bfs(){
	queue<pair<int,pair<int,int> > > q;
	q.push({0,{0,0}});
	visit[0][0][0]=1;
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second.first;
		int flag=q.front().second.second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx<0||nx>=n||ny<0||ny>=m)continue;
			if(!visit[nx][ny][flag]&&map[nx][ny]=='0'){
				visit[nx][ny][flag] = visit[x][y][flag] +1;
				q.push({nx,{ny,flag}});
			}
			if(!visit[nx][ny][flag+1]&&flag==0&&map[nx][ny]=='1'){
				visit[nx][ny][flag+1]=visit[x][y][flag]+1;
				q.push({nx,{ny,flag+1}});
			}
		}
	}
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
		}
	}
	bfs();	
	int ret1=visit[n-1][m-1][0];
	int ret2=visit[n-1][m-1][1];
	if(ret1==0||ret2==0){
		if(ret1==ret2)cout<<-1;
		else cout<<max(ret1,ret2);
	}
	else cout<<min(ret1,ret2);
}
