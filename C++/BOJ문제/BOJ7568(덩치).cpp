#include<iostream>
#include <vector>

using namespace std;

int main(){
	vector<pair<int,int> > vec;  //��ġ ���ϴ� �����ε� ������ Ű �ΰ���ΰ� Ŀ���� ū�Ŵ�..ex ��Ű�°����� �����԰� ���̳����ٰ� ū�Ծƴ� 
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
