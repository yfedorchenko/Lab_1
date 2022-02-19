#include <algorithm>
using namespace std;
pair<int, double> Func2(double* mas, int size)
{
	pair<int, double> a;
	a.first = size;
	double sum = 0;
	for (int i = 0; i < size; i++) 
	{
		sum += mas[0];
	}
	a.second = sum / size;
	return a;
}