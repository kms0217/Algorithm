#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int n,pos,result=1;
		cin>>n>>pos;
		vector<int> vec(n);
		queue<pair<int,int> > q;  //priority , init pos
		for(int i=0;i<n;i++){
			int input;
			cin>>input;
			q.push(make_pair(input,i));
			vec[i]=input;
		}
		sort(vec.begin(),vec.end(),greater<int>());
		
		while(!q.empty()){
			while(q.front().first!=vec[0]){				
				pair<int,int> tmp=q.front();
				q.pop();
				q.push(tmp);
			}
			if(q.front().second==pos)break;
			q.pop();	
			result++;
			vec.erase(vec.begin());
		}
		cout<<result<<"\n";
	}
}



