#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <queue>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <stack>
#define INF 900000000


typedef long long ll;
using namespace std;


int main()
{
#ifdef _CONSOLE
    freopen("input.txt", "r", stdin);
#endif
	int t;
	cin >> t;
	while(t--)
	{
		string a;
		cin >> a;
		int lens = a.length();
		(a[(lens / 2) - 1] == a[lens / 2]) ?  cout << "Do-it" << endl : cout << "Do-it-Not" << endl;
	}
}
