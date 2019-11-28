#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
	int n;
	stack<int> st;
	cin>>n;
	vector<int> vec(n);
	vector<int> result(n);
	for(int i=0;i<n;i++)
		cin>>vec[i];
	for(int i=n-1;i>=0;i--){
		while(!st.empty()&&vec[i]>st.top())
			st.pop();
		if(st.empty())
			result[i]=-1;
		else
			result[i]=st.top();
		st.push(vec[i]);
	}
	for(int i=0;i<n;i++)
		cout<<result[i]<<" ";
}
