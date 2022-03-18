//NestedFOR
#include<iostream>
using namespace std;
//#define MULTIPLICATON TABLE
void main()
{
	setlocale(LC_ALL, "");
#ifdef MULTIPLICATION TABLE
	int n = 10;
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			cout << i << "\t" << j << endl;

		}
		cout << endl;
	}
#endif

	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout.width(5); //задаем ширину поля
			//после задания ширины устанавливается выранивание по правому краю
			cout << i * j;
		}
		cout << endl;
	}

}