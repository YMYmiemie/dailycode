#include <iostream>
using namespace std;

int q[8] = { -1,-1,-1,-1,-1,-1,-1,-1 }; //存每个皇后的列位置

void queen(int row, int column);
int judge(int row);

int main()
{
	int firstsite(0);
	cin >> firstsite;
	q[0] = firstsite;
	queen(1, 1);
	return 0;
}

void queen(int row, int column)
{
	if (row == 8)
	{
		for (int i(0); i < 8; i++)
		{
			cout << q[i];
		}
		cout << endl;
		return;
	}
	else
	{
		q[row] = column;
		if (judge(row))
		{
			queen(row + 1, 1);
		}
		if (column < 8)
		{
			queen(row, column + 1);
		}
	}
	return;
}

int judge(int row)
{
	for (int r(0); r < row; r++)
	{
		if (q[row] == q[r] || (row - q[row]) == (r - q[r]) || (row + q[row]) == (r + q[r]))
		{
			return 0;
		}
	}
	return 1;
}
