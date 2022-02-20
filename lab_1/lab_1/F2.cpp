#include <algorithm>
using namespace std;
pair<int, float> Func2(pair<float, int>* mas, int size)
{
	pair<int, float> a;
	a.first = size;
	float sum = 0;
	for (int i = 0; i < size; i++) 
	{
		sum += mas[i].first;
	}
	a.second = sum / size;
	return a;
}