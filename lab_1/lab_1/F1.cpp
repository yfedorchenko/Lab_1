#include <algorithm>
using namespace std;
bool F1_comp(pair<float, int> a, pair<float, int> b)   // Компоратор помогает определить нужно ли менять 
{                                                      // 2 числа в массиве или нет. 
	int ia = a.second, ib = b.second, sa = 0, sb = 0;  // ia и ib - дробные части a и b
	while (ia)                                         // Считаем сумму цифр у ia
	{
		sa += ia % 10;
		ia /= 10;
	}
	while (ib)                                         // Считаем сумму цифр у ib
	{
		sb += ib % 10;
		ib /= 10;
	}
	return sa < sb;                                    // Сравниваем суммы цифр
}

pair<float, int>* Func1(pair<float, int>* mas, int i)
{
	sort(mas, mas + i, F1_comp);                       // Сортируем, используя компаратор выше
	return mas;
}