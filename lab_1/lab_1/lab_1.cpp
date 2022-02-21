#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

pair<float, int>* Func1(pair<float, int>* mas, int i);
pair<int, float> Func2(pair<float, int>* mas, int size);

int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "**********************************************************";
	cout << "\n*Лабораторная работа №1\tФедорченко Юрий Сергеевич МС-20-1*\n";
	cout << "**********************************************************\n";

	int size=0;
	pair<float, int>* mas;
	if (argc > 1) 
	{
		cout << "Обнаружены входные данные. \nСчитывание...";
		size = argc - 1;
		mas = new pair<float, int>[size];
		for (int i = 0; i < size; i++)
		{
			mas[i].first = atof(argv[i + 1]);
			string arg = argv[i + 1];
			bool yes = false;
			for(int j=0;j<arg.size();j++)
			{
				if (arg[j] == '.') 
				{
					arg[j] = ' ';
					yes = true;
					break;
				}
				arg[j] = ' ';
			}
			if (yes) mas[i].second = stoi(arg);
			else mas[i].second = 0;
		}
	}
	else 
	{
		string file;
		cout << "Входные данные не обнаружены. \nВведите название входного файла: ";
		cin >> file;
		ifstream a;
		a.open(file);
		while (!a.eof())
		{
			float b;
			a >> b;
			size++;
		}
		a.close();
		mas = new pair<float, int>[size];
		a.open(file); 
		for (int i = 0; i < size; i++) 
		{
			string arg;
			a >> arg;
			mas[i].first = stof(arg);
			bool yes = false;
			for (int j = 0; j < arg.size(); j++)
			{
				if (arg[j] == '.')
				{
					arg[j] = ' ';
					yes = true;
					break;
				}
				arg[j] = ' ';
			}
			if (yes) mas[i].second = stoi(arg);
			else mas[i].second = 0;
		}
		a.close();
	}
	mas = Func1(mas, size);
	string file;
	cout << "Введите название выходного файла: ";
	cin >> file;
	ofstream o;
	o.open(file);
	for (int i = 0; i < size; i++) 
	{
		o << mas[i].first<<" ";
	}
	o << endl << Func2(mas, size).first << " " << Func2(mas, size).second;
	o.close();
	cout << "Данные выведены в файл " << file << endl;
	return 0;
}