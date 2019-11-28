#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		stack <char> st;
		string str;
		cin>>str;
		for(int i=0;i<str.size();i++){
			if(str[i]=='(')
				st.push(str[i]);
			else if(!st.empty()&&st.top()=='(')
				st.pop();
			else 
				st.push(str[i]);
		}
		if(st.size()==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";	
	}
}
