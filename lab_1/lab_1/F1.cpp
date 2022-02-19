#include <algorithm>
using namespace std;
bool F1_comp(double a, double b) 
{
	a = a - (int)a;
	b = b - (int)b;
	while (a != (int)a)
	{
		a *= 10;
	}
	while (b != (int)b)
	{
		b *= 10;
	}
	int ia = a, ib = b, sa = 0, sb = 0;
	while (ia) 
	{
		sa += ia % 10;
		ia /= 10;
	}
	while (ib)
	{
		sb += ib % 10;
		ib /= 10;
	}
	return sa > sb;
}

double* Func1(double* mas, int i) 
{
	sort(mas, mas + i, F1_comp);
	return mas;
}