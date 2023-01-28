// C++ program to illustrate the traversal
// of the 2D array
#include "iostream"
using namespace std;

const int N = 2;
const int M = 2;

// Function to illustrate traversal in arr[][]
void traverse2DArray(int arr[][M], int N)
{

	// Iterate from [1, N-1] and print
	// the element at that index
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}

// Driver Code
int main()
{

	// Given array
	int arr[][M] = { { 1, 2 }, { 3, 4 } };

	// Function call
	traverse2DArray(arr, N);

	return 0;
}
