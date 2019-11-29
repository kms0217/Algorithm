#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	bool chk=false;      //첫 -이후의 모든 수는 빼주면됨 
	string str;
	int result=0,num;
	cin>>str;
	for(int i=0;i<str.size();){
		
		if(str[i]=='-'){
			chk=true;
			i++;
		}
		else if(str[i]=='+')
			i++;
		
		num=str[i++]-'0';
		while(str[i]!='-'&&str[i]!='+'&&i<str.size()){
			num*=10;
			num+=str[i++]-'0';
		}
		
		
		if(chk)
			result-=num;
		else 
		 	result+=num;
	}
	cout<<result;
}

