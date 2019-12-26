#include<iostream>
#include<queue>
#include<algorithm>
#include<vector> 
using namespace std;

int m,n;
int map[1001][1001];
int visit[1001][1001];
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};

bool Allclear(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!map[i][j]&&!visit[i][j])return false;
		}
	}
	return true;
}

void bfs(vector<pair<int,int> > &vec){
	queue<pair<int,int> > q;
	for(int i=0;i<vec.size();i++){
		q.push(vec[i]);
		visit[vec[i].first][vec[i].second]=1;
	}
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx<0||nx>=n||ny<0||ny>m)continue;
			if(!visit[nx][ny]&&map[nx][ny]==0){
				q.push({nx,ny});
				visit[nx][ny]=visit[x][y]+1;
			}
		}
	}
}

int main(){
	int ret=0;
	vector<pair <int,int> > vec;
	pair<int,int> pos;
	cin>>m>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
			if(map[i][j]==1)
				vec.push_back({i,j});
		}
	}
	bfs(vec);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			ret=max(visit[i][j],ret);
		}
	}
	if(Allclear())
		cout<<ret-1;
	else 
		cout<<-1;
}
