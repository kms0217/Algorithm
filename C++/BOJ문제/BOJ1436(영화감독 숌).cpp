#include<iostream>
#include<string>

using namespace std;
int N;

int main(){
	cin>>N;
	
	int num=666;
	int cnt=0;
	string check;
	while(true){
		check=to_string(num);
		if(check.find("666")!=string::npos)
			cnt++;
		if(cnt==N)break;
		num++;
	}
	cout<<cnt;
}
