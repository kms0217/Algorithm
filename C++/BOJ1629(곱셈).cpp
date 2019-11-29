#include<iostream>

using namespace std;

int main(){     //A^9=A*A^8  // A^8=A^4*A^4
	long long int A,B,C,result=1;
	cin>>A>>B>>C;
	while(B>0){
		if(B%2==1)
			result=(result*(A%C))%C;
		A=((A%C)*(A%C))%C;
		B/=2;
	}
	cout<<result;
}
