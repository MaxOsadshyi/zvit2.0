// Lab_02.cpp 
// ������� ������ 
// ����������� ������ � 2.1 
// ˳��� ��������. 
// ������ 2 

#include <iostream> 

using namespace std;

int main() {
    double x;  // ������� �������� 
    double z1; // ��������� ���������� 1-�� ������     
    //double z2; // ��������� ���������� 2-�� ������ 

    cout << "x = "; cin >> x;
    z1 = (((x + 2) / (sqrt(2 * x)) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - sqrt(2)) / (x + 2)));
    //z2 = 1 / (sqrt(x) + sqrt(2));

    cout << endl;
    cout << "z1 = " << z1 << endl;   
    //cout << "z2 = " << z2 << endl;
    cin.get();
    return 0;
}

