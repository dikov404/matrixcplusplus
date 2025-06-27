/* RU VERSION
коментарии можете убрать их нахуй, если вам не нужны, но я их оставил, чтобы было понятнее, что и как. :3
банальный код матрицы, заполненной случайными нулями и единицами. такой сделать легко, но для кого-то это может быть полезно, а для кого-то нет :/. (делал всё по документациям и т.д, если знаете как можно упроситить - упрощайте)
короче, тип меня проверял на знание C++, и заставил сделать матрицу любого размера. я сделал матрицу 10 на 10, заполненную случайными нулями и единицами.
*/

/* EN VERSION
you can fuck off the comments if you don't need them, but I left them to make it clearer. :3
trivial code for a matrix filled with random zeros and ones. it's easy to make such a code, but it may be useful for some people and not for others :/. (I did everything according to documentation, etc., if you know how to simplify it - simplify it)
in short, the type tested me for C++ knowledge and made me make a matrix of any size. i made a 10 by 10 matrix filled with random zeros and ones.
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
	const int rows = 10; // RU - размер матрицы по вертикали. можно менять на любое другое число. EN -  the vertical size of the matrix. can be changed to any other number.
	const int cols = 10; // RU - размер матрицы по горизонтали. можно менять на любое другое число. EN - matrix size horizontally. can be changed to any other number.

	srand(time(0));

	vector<vector<int>> matrix(rows, vector<int>(cols));
	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
			matrix[i][j] = rand() % 2;

	cout << "matrix:\n"; // RU - тут можете менять на любой другой текст, который вам нужен, а если точнее "matrix:\n", но совет лучше не убирать :\n , не меняйте на "matrix:\n\n", XD. EN - here you can change to any other text you want, more specifically ‘matrix:\n’, but the advice is better not to remove :\n , don't change to ‘matrix:\n\n\n’, XD
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

/* RU VERSION
для тех у кого Visual Studio нету, вот компилятор(ы) "https://www.onlinegdb.com/online_c++_compiler"
туда просто код вставляете и нажимаете кнопку "run" или "запустить".
кто захочет, берите и добавляйте счётчик , который будет считать количество единиц, которые окружены нулями. (счётчик островов)
*/
 
/* EN VERSION
for those who don't have Visual Studio, here is the compiler(s) "https://www.onlinegdb.com/online_c++_compiler"
where you just insert the code and press the "run" or "run" button.
whoever wants to, take and add a counter that will count the number of units that are surrounded by zeros. (island counter)
*/