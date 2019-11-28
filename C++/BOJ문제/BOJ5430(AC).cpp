#include<iostream>
#include<vector>
#include<deque>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,num=0;
		deque<int> dq;
		string command,str;
		cin>>command>>n>>str;
		if(n!=0){
			for(int i=0;i<str.size();i++){
				if(str[i]=='[')continue;
				if(str[i]==','||str[i]==']'){
					dq.push_back(num);
					num=0;
				}
				else{
					num*=10;
					num+=str[i]-'0';
				}
			}
		}
		bool flag=false;
		int Rnum=0;
		for(int i=0;i<command.size();i++){
			switch(command[i]){
				case 'D':
					if(dq.size()==0){
						cout<<"error\n";
						flag=true;
					}else if(Rnum%2==0)
						dq.pop_front();
					else{
						dq.pop_back();
					}
					break;
				case 'R':
					Rnum++;
					break;
				default:
					cout<<"code error!";
					break;
			}
			if(flag)break;
		}
		if(!flag){
		cout<<"[";
		if(Rnum%2==0)
			for(auto it=dq.begin();it!=dq.end();it++){
				cout<<*it;
				if(it!=dq.end()-1)cout<<",";
			}
		else
			for(auto it=dq.end()-1;it>=dq.begin();it--){
				cout<<*it;
				if(it!=dq.begin())cout<<",";
			}
		
		cout<<"]\n";
		}
	}
}
