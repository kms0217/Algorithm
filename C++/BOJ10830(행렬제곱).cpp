#include<iostream>
#include<algorithm>
using namespace std;

int N;
void multi(int C[][5], int D[][5]) {
	int temp[5][5];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)
			temp[i][j]=0;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				temp[i][j] = (temp[i][j] + (C[i][k] % 1000) * (D[k][j] % 1000)) % 1000;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			C[i][j] = temp[i][j];
		}
	}
}
int main() {
	int A[5][5], B[5][5];
	unsigned long long int P;
	cin >> N >> P;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> A[i][j];
			B[i][j] = 0;
			if(i==j)
				B[i][j] = 1;
		}
	}
	while (P != 0) {
		if (P % 2 == 1) {
			multi(B, A);
		}
		multi(A, A);
		P /= 2;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << B[i][j] << " ";
		cout << endl;
	}
}
