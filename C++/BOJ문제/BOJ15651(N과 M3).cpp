#include<iostream>
#include<vector>
using namespace std;
bool *visit;
vector<int> p;
int N,M;

void dfs(int s){
	if(p.size()==M){
		for(int i=0;i<p.size();i++)
			cout<<p[i]<<" ";
		cout<<"\n";
		return;
	}
	for(int i=1;i<=N;i++){
			p.push_back(i);
			dfs(i);
			p.pop_back();
	}
}

int main(){	
	cin>>N>>M;
	visit=new bool[N];
	for(int i=1;i<=N;i++){
		p.push_back(i);
		dfs(i);
		p.pop_back();
	}
}

