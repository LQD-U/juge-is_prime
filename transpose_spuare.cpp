#include<iostream>
using namespace std;

template<size_t N,size_t M>
void transpose(int a[N][M], int b[M][N]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			b[j][i] = a[i][j];
		}
	}
}



int main() {
	int matrix[3][4] = { {3,4,5,6,},{5,6,3,4},{3,5,2,2} };
	int transposed[4][3];

	transpose<3,4>(matrix, transposed);

	for (int i = 0; i <4; i++) {
		for (int j = 0; j <3 ; j++) {
			cout << transposed[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}