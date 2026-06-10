/*
#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <sstream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	vector<int> banana;

	srand(time(NULL));

	int ln;
	cout << "How lenght of vector?" << endl;
	cin >> ln;
	banana.resize(ln);
	 
	cout << "Generate vector:" << endl;
	for (int i = 0; i < size(banana); i++) {
		banana[i] = rand() % 200 - 100;
		cout << banana[i] << " ";
	}

	int minim;
	cout << endl << endl << "Modified vector:" << endl;
	for (int i = 0; i < size(banana); i++) {
		minim = banana[i];
		
		for (int j = i; j < size(banana); j++) {
			if (banana[j] < minim) { swap(banana[i], banana[j]); minim = banana[i];}
		}
		
		cout << banana[i] << " ";
	}

	cout << endl << endl << "In vector " << banana.size() << " elements" << endl;

	cout << endl << endl << endl << "Words without repeat, but register rule not included(but != But)" << endl;

	ifstream file("mango_lab_5.txt");
	ifstream file1("mango_lab_5.txt");
	string s,s1;
	char c,c1;
	bool flag = true, flag1 = true, flag_repeat = false;
	int counter;

	ifstream file2("mango_lab_5.txt");
	ifstream file21("mango_lab_5.txt");
	string s2, s21;
	char c2, c21;
	bool flag2 = true, flag21 = true, flag_repeat2 = false;
	int counter2;
	multimap <string, int> potatoMap = {}; //create multimap
	while (file2) {
		file2 >> s2;

		if (s2.size() < 3)
			continue;

		while (flag2) {
			c2 = s2[s2.size() - 1];
			if (c2 == '.' or c2 == ',' or c2 == '!' or c2 == '?' or c2 == ':' or c2 == ';' or c2 == '>')
				s2.erase(s2.size() - 1);
			else
				flag2 = false;
		}
		potatoMap.emplace(s2, 0);		
		flag2 = true;
	}
	auto itPotatoMapBegin = potatoMap.begin(); // create potato iterator
	string key;
	for (itPotatoMapBegin = potatoMap.begin(); itPotatoMapBegin != potatoMap.end(); itPotatoMapBegin++)
	{
		key = itPotatoMapBegin->first;
		if (potatoMap.count(key) < 2)
			cout << itPotatoMapBegin->first << endl;
	}

//	cout << "\n\n\n\n\nOld version:\n\n";
//
//	while (file) {
//		
//		file >> s;
//
//		while (flag) {
//			c = s[s.size() - 1];
//			if (c == '.' or c == ',' or c == '!' or c == '?' or c == ':' or c == ';' or c == '>')
//				s.erase(s.size() - 1);
//			else
//				flag = false;
//		}
//		flag = true;
//
//		file1.clear();
//		file1.seekg(0, ios::beg);
//		counter = 0;
//		while (file1) {
//			file1 >> s1;
//
//			while (flag1) {
//				c1 = s1[s1.size() - 1];
//				if (c1 == '.' or c1 == ',' or c1 == '!' or  c1 == '?' or c1 == ':' or c1 == ';' or c1 == '>')
//					s1.erase(s1.size() - 1);
//				else
//					flag1 = false;
//			}
//			flag1 = true;
//
//			if (s == s1) counter++;
//			if (counter == 2 or s.size() < 3) {
//				flag_repeat = true;
//				break;
//			}
//		}
//		counter = 0;
//
//		if (flag_repeat == true) {
//			flag_repeat = false;
//			continue;
//		}
//
//
//	
//		cout << endl << s;
//	}
}
*/