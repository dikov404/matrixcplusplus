

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
	const int rows = 10; 
	const int cols = 10; 
	srand(time(0));

	vector<vector<int>> matrix(rows, vector<int>(cols));
	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
			matrix[i][j] = rand() % 2;

	cout << "matrix:\n"; 
	for (const auto& row : matrix) {
		for (int val : row)
			cout << val << " ";
		cout << "\n";
	}

	int icount = 0;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (matrix[i][j] == 1) {
				bool up = (i == 0) || (matrix[i - 1][j] == 0);

				bool down = (i == rows - 1) || (matrix[i + 1][j] == 0);

				bool left = (j == 0) || (matrix[i][j-1] == 0);

				bool right = (j == cols - 1) || (matrix[i][j + 1] == 0);
			}
		}
	}
}
