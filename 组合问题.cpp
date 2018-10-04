/*
题目描述：
给定n，输出从1，2，3，... ，n中任取k(0<k<=n)个数的所有组合（数字按从小到大排列）。 
输入：
一行，两个数，n和k。 
输出：
所有k个数字的组合，一行一个，组合内数字按从小到大排列，两个数字之间有一个空格，不同组合按字典序排列。 
样例输入：
3 1
4 2
样例输出：
1
2
3
1 2
1 3
1 4
2 3
2 4
3 4
*/

#include<iostream>

using namespace std;

void combination(int i, int n, int* com, int count, int k);

int main()
{
	int n(0), k(0);
	cin >> n >> k;
	int *com = new int[k];
	com[k] = { 0 };
	combination(1, n, com, 0, k);
	return 0;
}

void combination(int i, int n, int* com, int count, int k)
{
	if (count == k)       //判断找到一个组合后输出
	{
		for (int c(0); c < k; c++)
		{
			cout << com[c] << ' ';
		}
		cout << endl;
		return;
	}
	else if (i > n)
	{
		return;
	}
	else
	{
		if (count < k)   //找齐一个组合的过程
		{
			com[count] = i;
			combination(i + 1, n, com, count + 1, k);
		}
		//if (com[k-1] <= n)
		//{
			combination(i + 1, n, com, count, k);
		//}
		//combination(com[0] + 1, n, com, 0, k);
	}
}
