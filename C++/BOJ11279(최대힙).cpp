#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
	priority_queue<int,vector<int>,less<int> > q;
	int n;
	cin>>n;
	while(n--){
		int cmd;
		cin>>cmd;
		if(cmd==0){
			if(q.empty())cout<<0<<"\n";
			else {
				cout<<q.top()<<"\n";
				q.pop();
				}
			}
		else q.push(cmd);		
	}
	
}
