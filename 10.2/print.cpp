#include "print.h"
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
#include <iomanip>
#include "var.h" // підключили зовнішні оголошення змінних
using namespace std;
using namespace nsPr;
using namespace nsVar;
void nsPr::PrintTXT()
{
		ifstream fin(fname); // відкрили файл для зчитування
		string s; // прочитаний рядок
		while (getline(fin, s)) // поки можна прочитати рядок
		{
			cout << s << endl; // виводимо його на екран
		}
		cout << endl;
}
