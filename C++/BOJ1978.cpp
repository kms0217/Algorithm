#include<iostream>

using namespace std;

int main(){
	int N,count=0,A;
	bool flag;
	cin>>N;
	while(N--){
		flag=false;
		cin>>A;
		if(A>=2){
			for(int i=2;i<A;i++){
				if(A%i==0)flag=true;
			}
			if(!flag)
				count++;
		}
	}
	cout<<count;
}
