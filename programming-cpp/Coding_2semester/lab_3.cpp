/*
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

int main()
{
    using namespace std;

    ofstream out;
    out.open("Generosity.txt");
    out << "Country with generocity above 0.15" << endl;

    bool flag = true;
    ifstream file("data.csv");
    string row, str;
    getline(file, row);
    cout << row << endl;

    int col1;
    double col3, col4, col5, col6, col7, col8, col9, maxCol5 = 0;
    string col2, nameMaxCol5;
    cout << endl << "Country with healthy life expectancy below 0.6:" << endl;
    for (int i = 0; !file.eof(); i++) 
        {

//
//        Второй вариант реализации:
//
//        int i;
//        while (file)
//        {
//        i++;
//        Кот-код-кот
//        }
//        


        getline(file, row);
        istringstream stream(row);

        getline(stream, str, ',');
        col1 = stoi(str);
        //Overall rank

        getline(stream, str, ',');
        col2 = str;
        //Country or region

        getline(stream, str, ',');
        col3 = stod(str);
        //Score

        getline(stream, str, ',');
        col4 = stod(str);
        //GPD per capita

        getline(stream, str, ',');
        col5 = stod(str);
        //Social support
        if (col5 > maxCol5) {
            maxCol5 = col5;
            nameMaxCol5 = col2;
        }

        getline(stream, str, ',');
        col6 = stod(str);
        //Healthy life expectancy
        if (col6 < 0.6) {
            cout << col2 << " " << col6 << endl;

        }
        getline(stream, str, ',');
        //Freedom to make life choices
        col7 = stod(str);

        getline(stream, str, ',');
        col8 = stod(str);
        //Generosity

        getline(stream, str, ',');
        col9 = stod(str);
        //Perceptions of corruption

        if (col8 > 0.15) {
            out << col1 << " " << col2 << " " << col3 << " " << col4 << " " << col5 << " " << col6 << " " << col7 << " " << col8 << " " << col9 << endl;
        }
        //Зафиксировать три точки после запятой(зря усложнять): 
        //cout << fixed << setprecision(3) << value;
    }
    cout << endl << endl << "Country with max social support: " << nameMaxCol5 << " " << maxCol5 << endl;

}
*/