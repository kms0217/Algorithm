#include<iostream> 
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int n;
int dx[4]={0,0,1,-1};
int dy[4]={-1,1,0,0};
int visit[25][25];
char map[25][25];

bool checkBound(int x,int y){
	return x>=0&&x<n&&y>=0&&y<n&&!visit[x][y]&&map[x][y]=='1';
}
bool comp(int x,int y){
	return x<y;
}

pair<int,int> nextpos(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(!visit[i][j]&&map[i][j]!='0')return {i,j};
		}
	}
	return {-1,-1};
}

int bfs(pair<int,int> start){
	int count=0;
	queue<pair<int,int> > q;
	q.push(start);
	visit[start.first][start.second]=1;
	while(!q.empty()){
		count++;
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextx=x+dx[i];
			int nexty=y+dy[i];
			if(checkBound(nextx,nexty)){
				q.push({nextx,nexty});
				visit[nextx][nexty]=1;
			}
		}	
	}
	return count;
}

int main(){
	int count=0;
	vector<int> ret;
	pair<int,int> pos;
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		 	cin>>map[i][j];
	pos=nextpos();
	while(pos.first!=-1&&pos.second!=-1){
		count++;
		ret.push_back(bfs(pos));
		pos=nextpos();
	}
	sort(ret.begin(),ret.end(),comp);
	cout<<count<<endl;
	for(int i=0;i<ret.size();i++)
		cout<<ret[i]<<endl;
}
