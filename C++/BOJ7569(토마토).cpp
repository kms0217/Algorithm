#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<tuple>

using namespace std;

int n,m,h,sum=0,check=0;
int dx[6]={0,0,0,0,-1,1};
int dy[6]={0,0,-1,1,0,0};
int dz[6]={1,-1,0,0,0,0};
int map[100][100][100];
int visit[100][100][100];

void bfs(vector<tuple<int,int,int> > &vec){
	queue<tuple<int,int,int> > q;
	int x,y,z;
	for(int i=0;i<vec.size();i++){
		tie(z,y,x)=vec[i];
		q.push(make_tuple(z,y,x));
		visit[z][y][x]=1;
	}
	while(!q.empty()){
		tie(z,y,x)=q.front();
		q.pop();
		for(int i=0;i<6;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			int nz=z+dz[i];
			if(nz<0||nz>=h||ny<0||ny>=n||nx<0||nx>=m)continue;
			if(!visit[nz][ny][nx]&&!map[nz][ny][nx]){
				map[nz][ny][nx]=1;
				check++;
				visit[nz][ny][nx]=visit[z][y][x]+1;
				sum=visit[nz][ny][nx];
				q.push(make_tuple(nz,ny,nx));
			}
		}		
	}
}

int main(){
	int zero=0;
	vector<tuple<int,int,int> > vec;
	cin>>m>>n>>h;
	for(int i=0;i<h;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				cin>>map[i][j][k];
				if(!map[i][j][k])zero++;
				if(map[i][j][k]==1) vec.push_back(make_tuple(i,j,k));
			}
		}
	}
	if(!zero){
		cout<<0;
		return 0;
	}
	bfs(vec);
	if(check==zero)
		cout<<sum-1;
	else
		cout<<-1;
}
