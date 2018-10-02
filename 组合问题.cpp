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
	if (count == k)       //�ж��ҵ�һ����Ϻ����
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
		if (count < k)   //����һ����ϵĹ���
		{
			com[count] = i;
			combination(++i, n, com, ++count, k);
		}
		if (com[k-1] <= n)
		{
			combination(i, n, com, --count, k);
		}
		combination(com[0] + 1, n, com, 0, k);
	}
}
