// Lab_02.cpp 
// Осадчий Максим 
// Лабораторна робота № 2.1 
// Лінійні програми. 
// Варіант 2 

#include <iostream> 

using namespace std;

int main() {
    double x;  // вхідний параметр 
    double z1; // результат обчислення 1-го виразу     
    //double z2; // результат обчислення 2-го виразу 

    cout << "x = "; cin >> x;
    z1 = (((x + 2) / (sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2)));
    //z2 = 1 / (sqrt(x) + sqrt(2));

    cout << endl;
    cout << "z1 = " << z1 << endl;   
    //cout << "z2 = " << z2 << endl;
    cin.get();
    return 0;
}

