#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
	int n;
	queue<int> q;
	string str;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		if(str=="push"){
			int a;
			cin>>a;
			q.push(a);
		}
		else if(str=="front"){
			if(q.empty())
				cout<<-1<<"\n";
			else
				cout<<q.front()<<"\n";
		}
		else if(str=="back"){
			if(q.empty())
				cout<<-1<<"\n";
			else
				cout<<q.back()<<"\n";
		}
		else if(str=="size"){
			cout<<q.size()<<"\n";
		}
		else if(str=="empty"){
			cout<<q.empty()<<"\n";
		}
		else{
			if(q.empty())
				cout<<-1<<"\n";
			else{
				cout<<q.front()<<"\n";
				q.pop();
			}
				
		}
	}
	
}
