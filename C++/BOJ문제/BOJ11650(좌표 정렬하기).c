#include<stdio.h>

int x[100000];
int y[100000];

void swap(int i,int j,int p){
	int tmp=x[p];
	x[p]=x[j];
	x[j]=tmp;
	tmp=y[p];
	y[p]=y[j];
	y[j]=tmp;		
}

void sort(int left,int right){
	if(left<right){
	int p=left,i=left+1,j=right;
		while(i<j){
			while(x[i]<=x[p]&&i<right){
				if(x[i]==x[p]){
					if(y[i]>y[p])break;
				}
				if(i<right)
					i++;
			}
			while(x[j]>=x[p]&&j>left){
				if(x[j]==x[p]){
					if(y[j]<y[p])break;
				}
				if(j>left)
					j--;
			}
			if(i<j){
				int tmp=x[i];
				x[i]=x[j];
				x[j]=tmp;
				tmp=y[i];
				y[i]=y[j];
				y[j]=tmp;
			}	
		}
		if(i==j){
			if(x[j]==x[p]){
				if(y[j]<y[p]) swap(i,j,p);
			}
			else if(x[j]<x[p])swap(i,j,p);
		}
		else swap(i,j,p);
		sort(left,j-1);
		sort(j+1,right);
		
	}
}

int main(){
	int N;
	scanf("%d",&N);
	int i;
	for(i=0;i<N;i++)
		scanf("%d %d",&x[i],&y[i]);
	sort(0, N-1);
	for(i=0;i<N;i++)
		printf("%d %d\n",x[i],y[i]);
}
