#include<iostream>

using namespace std;
int gcd(int a,int b){
	if(a%b==0)return b;
	return gcd(b,a%b);
}
int main(){
	int num1,num2;
	cin>>num1>>num2;
	if(num1<num2){
		int temp=num1;
		num1=num2;
		num2=temp;
	}
	int g=gcd(num1,num2);
	cout<<g<<"\n"<<(num1/g)*(num2/g)*g;
	
}
