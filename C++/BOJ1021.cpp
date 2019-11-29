#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

int main(){
	int n,m,result=0;
	cin>>n>>m;
	deque<int> dq;
	vector<int> input(m);
	for(int i=0;i<m;i++)
		cin>>input[i];
	for(int i=0;i<n;i++)
		dq.push_back(i+1);
	for(int i=0;i<m;i++){
		if(input[i]==dq.front()){
			dq.pop_front();
			continue;
		}
		int qsize=dq.size();
		if(qsize%2==1)qsize++;
		int diff=find(dq.begin(),dq.end(),input[i])-dq.begin()+1;
		if(diff<=qsize/2){
			while(dq.front()!=input[i]){
				int temp=dq.front();
				dq.pop_front();
				dq.push_back(temp);
				result++;
			}
			dq.pop_front();
		}
		else{
			while(dq.back()!=input[i]){
				int temp=dq.back();
				dq.pop_back();
				dq.push_front(temp);
				result++;
			}
			dq.pop_back();
			result++;
		}
	}
	cout<<result;
}
