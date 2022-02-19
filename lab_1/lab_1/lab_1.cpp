#include <iostream>
#include <fstream>
#include "F1.cpp"
#include "F2.cpp"
using namespace std;
int main(int argc, char* argv[])
{
	int size=0;
	double* mas;
	if (argc > 1) 
	{
		size = argc - 1;
		mas = new double[size];
		for (int i = 0; i < size; i++)
		{
			mas[i] = atoi(argv[i + 1]);
		}
	}
	else 
	{
		string file;
		cin >> file;
		ifstream a;
		a.open(file);
		while (!a.eof()) 
		{
			int b;
			a >> b;
			size++;
		}
		a.close();
		mas = new double[size];
		a.open(file); 
		for (int i = 0; i < size; i++) 
		{
			a >> mas[i];
		}
		a.close();
	}
	Func1(mas, size);
	string file;
	cin >> file;
	ofstream o;
	o.open(file);
	for (int i = 0; i < size; i++) 
	{
		o << mas[i]<<" ";
	}
	o << endl << Func2(mas, size).first << " " << Func2(mas, size).second;
	o.close();
	return 0;
}