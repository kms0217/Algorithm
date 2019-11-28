#include<iostream>
#include<deque>

using namespace std;

int main(){
	int n;
	deque<int> dq;
	cin>>n;
	for(int i=1;i<=n;i++)
		dq.push_front(i);
	while(dq.size()>1){
		dq.pop_back();
		if(dq.size()==1)break;
		int a=dq.back();
		dq.pop_back();
		dq.push_front(a);
	}
	cout<<dq.front();
}
