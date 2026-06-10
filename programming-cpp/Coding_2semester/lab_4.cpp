/*
#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));


	struct bananaStruct
	{

	};

	vector<int> banana;

	banana.resize(rand() % 10 + 3);// изменение размера вектора

	cout << "Generate vector:" << endl;
	for (int i = 0; i < size(banana); i++) {
		banana[i] = rand() % 99 + 1;
		cout << banana[i] << " ";
	}

	banana.push_back(777);// добавление нового элемента в конец вектора

	cout << endl << endl << "Change vector:" << endl;
	for (int i = 0; i < size(banana); i++) {
		cout << banana[i] << " ";
	}

	int n;
	cout << endl << endl << "From which position to delete the vector element?  " << endl;
	cin >> n;

	banana.erase(banana.begin()+n);// удаление элемента из вектора с произвольной позиции
	
	cout << endl << "Modified vector:" << endl;
	for (int i = 0; i < size(banana); i++) {
		cout << banana[i] << " ";
	}

	cout << endl << endl << "In vector " << banana.size() << " elements" << endl;// информация о числе элементов в векторе
}
*/