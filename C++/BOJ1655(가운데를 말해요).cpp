#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<functional>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,num;
	priority_queue<int,vector<int>,less<int> > left;
	priority_queue<int,vector<int>,greater<int> > right;
	cin>>n;
	while(n--){
		cin>>num;
		if(left.size()>right.size())
			right.push(num);
		else
			left.push(num);
		if(!left.empty()&&!right.empty()&&left.top()>right.top()){
			int temp=left.top();left.pop();
			left.push(right.top());
			right.pop();
			right.push(temp);
		}
		cout<<left.top()<<"\n";
	}
}
