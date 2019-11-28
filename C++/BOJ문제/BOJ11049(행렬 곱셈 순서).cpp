#include<iostream>
#include<vector>
#include<algorithm>
#define INF 0xffffffff
using namespace std;

unsigned int mem[501][501];
int main(){
	int N;
	cin>>N;
	vector<pair<unsigned int,unsigned int> > vec(N+1,make_pair(0,0));
	for(int i=1;i<=N;i++){
		unsigned int x,y;
		cin>>x>>y;
		vec[i]=make_pair(x,y);
	}

	for(int p=1;p<N;p++){		
		for(int x=1;x+p<=N;x++){
			int y=x+p;
			mem[x][y]=INF;
			for(int j=x;j<y;j++){
				mem[x][y]=min(mem[x][y],mem[x][j]+mem[j+1][y]+vec[x].first*vec[j].second*vec[y].second);
			}
		}
		
	}

	cout<<mem[1][N];
	
}
