#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	while(1){
		bool flag=false;
		string str;
		stack<char> st;
		getline(cin,str);

		if(str[0]=='.')break;
		for(int i=0;i<str.size();i++){			
			switch(str[i]){
				case '(': 
				case '[':
					st.push(str[i]);
					break;
				case ')':
				case ']':
					if(st.empty()){
						flag=true;
						break;
					}
					if((str[i]==')'&&st.top()=='(')||(str[i]==']'&&st.top()=='['))
						st.pop();
					else{
						flag=true;
						break;
					}
					break;
				default :break;
			}
			if(flag)break;
		}
		if(st.empty()&&!flag)cout<<"yes\n";
		else cout<<"no\n";
	}
	
}
