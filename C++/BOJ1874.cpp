#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
	int n,prev;
	cin>>n;
	vector<int> vec(n);
	vector<char> result;
	stack<int> st;
	for(int i=0;i<n;i++)
		cin>>vec[i];
	prev=vec[0];

	int innum=1;
	for(int i=0;i<n;i++){
		while(innum<=vec[i]){
			st.push(innum++);
			result.push_back('+');
		}
		if(st.top()<=vec[i]){
			st.pop();
			result.push_back('-');
		}	
	}
	if(result.size()!=2*n)
		cout<<"NO";
	else{
		for(int i=0;i<result.size();i++){
			cout<<result[i]<<"\n";
		}
	}
	
}
