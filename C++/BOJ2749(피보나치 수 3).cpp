#include<iostream>
#define UINT unsigned long long int
#define mod 1000000
using namespace std;


void multi(UINT C[][2], UINT D[][2]) {
	UINT temp[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
			temp[i][j]=0;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				temp[i][j] = (temp[i][j] + (C[i][k] % mod) * (D[k][j] % mod)) % mod;
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			C[i][j] = temp[i][j];
		}
	}
}
int main() {
	UINT A[2][2]={1,1,1,0}, B[2][2]={1,0,0,1};
	UINT n;
	cin >> n; 
	n--;
	while (n != 0) {
		if (n % 2 == 1) {
			multi(B, A);
		}
		multi(A, A);
		n /= 2;
	}
	cout<<B[0][0];
}
