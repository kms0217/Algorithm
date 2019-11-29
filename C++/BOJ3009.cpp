#include<iostream>
using namespace std;

int main(){
	int x[3],y[3];
	int mx[1001]={0,},my[1001]={0,};
	for(int i=0;i<3;i++){
		cin>>x[i]>>y[i];
		mx[x[i]]++;
		my[y[i]]++;
	}
	for(int i=0;i<3;i++){
		if(mx[x[i]]==1){
		cout<<x[i];
		break;
		}
	}
	for(int i=0;i<3;i++){
		if(my[y[i]]==1){
			cout<<" "<<y[i];
			break;
		}
	}
}
