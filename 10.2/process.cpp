#include "print.h"
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
#include <iomanip>
#include "var.h"
#include "process.h"// ��������� ������ ���������� ������
using namespace std;
using namespace nsPro;
using namespace nsVar;
void nsPro::ProcessTXT1()
{

	{
		ifstream fin(fname); // ������� ���� ��� ����������
		string s; // ���������� �����
		int i, count = 1, maxcount = 0;
		bool one = false;
		int k = 0;
		int n = 0;

		while (getline(fin, s)) // ���� ����� ��������� �����
		{
			while (getline(fin, s))
			{
				for (int i = 0; i < s.length(); i++) {
					if (s[i] == ' ') one = true;
					if (s[i] == ' ' && s[i + 1] == ' ') count++;
					else
					{
						if (maxcount < count) maxcount = count;
						count = 1;
					}
				}
			}
		}

		cout << count;
	}
}
