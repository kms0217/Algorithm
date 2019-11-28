#include<iostream>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	while(a&&b){
		if(!(a%b))cout<<"multiple\n";
		else if(!(b%a))cout<<"factor\n";
		else cout<<"neither\n";
		cin>>a>>b;
	}
}
