#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int> st;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a==0)
			st.pop();
		else 
			st.push(a);
	}
	int result=0;
	while(!st.empty()){
		result+=st.top();
		st.pop();
	}
	cout<<result;
}
