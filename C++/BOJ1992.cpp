#include<iostream>
#include<vector>

using namespace std;

char adj[64][64];
int n;
vector<char> result;
void compress(int x,int y,int size){
	if(size==1){
		if(adj[y][x]=='1'){
			result.push_back('1');
		}
		else{
			result.push_back('0');
		}
		return;
	}
	bool flag=false;
	for(int i=y;i<y+size;i++){
		for(int j=x;j<x+size;j++){
			if(adj[i][j]!=adj[y][x])flag=true;
		}
		if(flag)break;
	}
	if(flag){
		result.push_back('(');
		compress(x,y,size/2);
		compress(x+size/2,y,size/2);
		compress(x,y+size/2,size/2);
		compress(x+size/2,y+size/2,size/2);
		result.push_back(')');
	}
	else{
		if(adj[y][x]=='1')
			result.push_back('1');
		else result.push_back('0');
		
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>adj[i][j];
	compress(0,0,n);
	for(int i=0;i<result.size();i++)
		cout<<result[i];
}
