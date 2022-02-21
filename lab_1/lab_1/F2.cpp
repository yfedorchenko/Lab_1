#include <algorithm>
using namespace std;
pair<int, float> Func2(pair<float, int>* mas, int size)
{
	pair<int, float> a;
	a.first = size;
	float sum = 0;
	for (int i = 0; i < size; i++) // —читаем сумму всех чисел
	{
		sum += mas[i].first;
	}
	a.second = sum / size;         // —читаем среднее арифметическое 
	return a;
}