// Competitive Class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int i, j, n;
	cin >> n;
	vector<int>marks(n);
	for (i = 0; i < n; i++)
		cin >> marks[i];
	for (i = 0; i < n; i++)
	{
		int ans = 0;
		for (j = 0; j < n; j++)
		{
			if (marks[j] > marks[i])
				ans++;
		}
		cout << ans + 1 << " ";
	}

    return 0;
}

