#include <iostream>
using namespace std;

int raiseNumberPow(const int* base, const int* p)
{
    if (*p == 0)
	return 1;
    if (*p == 1)
	return *base;
    int res = 1;
    for (auto i = *p; i >=1; i--)
	res *= *base;
    return res;
}

int main()
{
    setlocale(0, "");
    /*1.	������� ��� ���������� � ���������� ����������� ����� ���� � ������. ���������� �������� � ���������� ���� �� ���� (������� �� ������ ��������� ������). ����� �������� ���������� � ������.
*/
/*int arr[5] = { 1,2,3,4,5 };
int* a0 = &arr[0];
int* a1 = &arr[1];
int dist = a1 - a0;
cout << "����� 1 ��������: " << a0 << "\n";
cout << "����� 2 ��������: " << a1 << "\n";
cout << "������� ����� ����������: " << dist << "\n";
cout << "������� ����� ���������� � ������: " << dist* sizeof(int) << "\n\n";


int a = 45;
int* ap = &a;
int b = 50;
int* bp = &b;
cout << "����� a: " << &a << "\n";
cout << ap << "\n";
cout << "����� b: " << &b << "\n";
cout << bp << "\n";
cout << (bp - ap)*sizeof(int) << "\n";*/

/*
2.	������������ ������ �����, ��� ������������ � 2, 3 � 4 �������. �������� �������������� � ������� ����������. // ????
*/

/*
int number;
int pow2 = 2;
int pow3 = 3;
int pow4 = 4;
cout << "������� �����: ";
cin >> number;

// ������� 1
cout<<number<<" ^ "<<pow2<<" = " << raiseNumberPow(&number, &pow2)<<"\n";
cout<<number<<" ^ "<<pow3<<" = " << raiseNumberPow(&number, &pow3)<<"\n";
cout<<number<<" ^ "<<pow4<<" = " << raiseNumberPow(&number, &pow4)<<"\n";*/

// ������� 2
/*
int number;
int pow2 = 2;
int pow3 = 3;
int pow4 = 4;
cout << "������� �����: ";
cin >> number;

int* numberptr = &number;
int* pow2ptr = &pow2;
int* pow3ptr = &pow3;
int* pow4ptr = &pow4;

int res = *numberptr;
for (auto i = *pow2ptr; i > 1; i--)
{
    res *= *numberptr;
}
cout << *numberptr << " ^ " << *pow2ptr << " = " << res << "\n";

res = *numberptr;
for (auto i = *pow3ptr; i > 1; i--)
{
    res *= *numberptr;
}
cout << *numberptr << " ^ " << *pow3ptr << " = " << res << "\n";

res = *numberptr;
for (auto i = *pow4ptr; i > 1; i--)
{
    res *= *numberptr;
}
cout << *numberptr << " ^ " << *pow4ptr << " = " << res << "\n";
*/
/*3.	����� ��������� �� ��������� ��������� ����� ���� ����� � �������� � ������.
*/
   
   /* int num1;
    int num2;

    cout << "������� 1 �����: ";
    cin >> num1;
    cout << "������� 2 �����: ";
    cin >> num2;

    int* num1ptr = &num1;
    int* num2ptr = &num2;
    int** num1dptr = &num1ptr;
    int** num2dptr = &num2ptr;
    int result = **num1dptr + **num2dptr;
    cout <<**num1dptr<<" + "<<**num2dptr<<" = "<< result << "\n";*/

    /*
    4.	����� ��������� �� ��������� �� ��������� ��������� ��������� ���. ������ ���� � �������� ���, �������� ������� �� ����� �������� ��� �������. ��������� ��� = ���� � 110.*/
    /*double weight, height;
    cout << "������� ���: ";
    cin >> weight;
    cout << "������� ����: ";
    cin >> height;
    double* weightptr = &weight;
    double** weight2ptr = &weightptr;
    double*** weight3ptr = &weight2ptr;
    double* heightptr = &height;
    double** height2ptr = &heightptr;
    double*** height3ptr = &height2ptr;

    const int CRITERIA = 110;
    double ideal_weight = ***height3ptr - CRITERIA;
    cout << "��������� ��� = " << ***height3ptr << " - " << CRITERIA << " = " << ideal_weight<<"��.\n";
    double weight_diff =   ***weight3ptr-ideal_weight;
    cout << "������������� ��������: " << ***weight3ptr  << " - "<< ideal_weight << " = " <<weight_diff << "��.\n";*/

    /*
5.	������� ������� ���������. �������� ������ ���� ��������� �������, ��������� ������ ���� ���������.
*/

    /*char ch = 'a';
    char* chptr = &ch;
    char** ch2ptr = &chptr;
    char*** ch3ptr = &ch2ptr;
    char**** ch4ptr = &ch3ptr;
    char***** ch5ptr = &ch4ptr;
    cout << &ch5ptr << "\n";
    cout << &*ch5ptr << " "<<&ch4ptr << "\n";
    cout << &**ch5ptr << " " << &ch3ptr << "\n";
    cout << &***ch5ptr << " " << &ch2ptr << "\n";
    cout << &****ch5ptr << " " << &chptr << "\n";*/
    return 0;
}

