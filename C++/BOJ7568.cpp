#include<iostream>
#include <vector>

using namespace std;

int main(){
	vector<pair<int,int> > vec;  //덩치 비교하는 문제인데 몸무게 키 두개모두가 커야지 큰거다..ex ㅣ키는같지만 몸무게가 많이나간다고 큰게아님 
	int N;
	cin>>N;
	vector<int> rank(N,1);
	for(int i=0;i<N;i++){
		int x,y;
		cin>>x>>y;
		vec.push_back(make_pair(x,y));
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==j)continue;
			if(vec[i].first<vec[j].first&&vec[i].second<vec[j].second)rank[i]++;
		}
	}
	
	for(int i=0;i<N;i++)
		cout<<rank[i]<<" ";
	
}
