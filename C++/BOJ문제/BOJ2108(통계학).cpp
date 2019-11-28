#include<iostream>

using namespace std;

int Count[8001]={0,};
int main(){
	int N,num,cnt=0;
	int maxfr=0,maxfrindex=0,rank=1;
	int Min=8001,Max=0;
	double sum=0;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>num;
		sum+=num;
		Count[num+4000]++;
	}
	for(int i=0;i<8001;i++){
		if(Count[i]){
			if(Min>i)Min=i;
			if(Max<i)Max=i;
			if(Count[i]>=maxfr){
				if(Count[i]==maxfr&&rank==2)continue;
				else if(Count[i]==maxfr){
					maxfrindex=i;
					rank++;
				}else{
					rank=1;
					maxfr=Count[i];
					maxfrindex=i;
				}
			}		
		}
	}		
	cout<<fixed;
	cout.precision(0);
	cout<<sum/N<<endl;
	int j=0;
	for(int i=0;i<8001;i++){
		if(Count[i])j+=Count[i];
		if(j>=N/2+1){
			cout<<i-4000<<endl;
			break;
		}
	}
	cout<<maxfrindex-4000<<endl;
	cout<<Max-Min<<endl;
}
