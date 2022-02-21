#include <algorithm>
using namespace std;
bool F1_comp(pair<float, int> a, pair<float, int> b)   // ���������� �������� ���������� ����� �� ������ 
{                                                      // 2 ����� � ������� ��� ���. 
	int ia = a.second, ib = b.second, sa = 0, sb = 0;  // ia � ib - ������� ����� a � b
	while (ia)                                         // ������� ����� ���� � ia
	{
		sa += ia % 10;
		ia /= 10;
	}
	while (ib)                                         // ������� ����� ���� � ib
	{
		sb += ib % 10;
		ib /= 10;
	}
	return sa < sb;                                    // ���������� ����� ����
}

pair<float, int>* Func1(pair<float, int>* mas, int i)
{
	sort(mas, mas + i, F1_comp);                       // ���������, ��������� ���������� ����
	return mas;
}