#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> result;
	deque<int> q;
	for(int i=1;i<=n;i++)
		q.push_back(i);
	while(!q.empty()){
		int num=k-1;
		while(num--){
			int temp=q.front();
			q.pop_front();
			q.push_back(temp);
		}
		result.push_back(q.front());
		q.pop_front();
	}
	cout<<"<";
	for(int i=0;i<n;i++){
		cout<<result[i];
		if(i<n-1)cout<<", ";
	}cout<<">";
	
}
