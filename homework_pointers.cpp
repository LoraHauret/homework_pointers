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
    /*1.	Создать две переменные и определить «расстояние» между ними в памяти. Расстояние показать в переменных того же типа (вычесть из одного указателя другой). Затем показать расстояние в байтах.
*/
/*int arr[5] = { 1,2,3,4,5 };
int* a0 = &arr[0];
int* a1 = &arr[1];
int dist = a1 - a0;
cout << "Адрес 1 элемента: " << a0 << "\n";
cout << "Адрес 2 элемента: " << a1 << "\n";
cout << "Разница между элементами: " << dist << "\n";
cout << "Разница между элементами в байтах: " << dist* sizeof(int) << "\n\n";


int a = 45;
int* ap = &a;
int b = 50;
int* bp = &b;
cout << "Адрес a: " << &a << "\n";
cout << ap << "\n";
cout << "Адрес b: " << &b << "\n";
cout << bp << "\n";
cout << (bp - ap)*sizeof(int) << "\n";*/

/*
2.	Пользователь вводит число, оно показывается в 2, 3 и 4 степени. Подсчёты осуществляются с помощью указателей. // ????
*/

/*
int number;
int pow2 = 2;
int pow3 = 3;
int pow4 = 4;
cout << "Введите число: ";
cin >> number;

// вариант 1
cout<<number<<" ^ "<<pow2<<" = " << raiseNumberPow(&number, &pow2)<<"\n";
cout<<number<<" ^ "<<pow3<<" = " << raiseNumberPow(&number, &pow3)<<"\n";
cout<<number<<" ^ "<<pow4<<" = " << raiseNumberPow(&number, &pow4)<<"\n";*/

// вариант 2
/*
int number;
int pow2 = 2;
int pow3 = 3;
int pow4 = 4;
cout << "Введите число: ";
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
/*3.	Через указатели на указатели посчитать сумму двух чисел и записать в третье.
*/
   
   /* int num1;
    int num2;

    cout << "Введите 1 число: ";
    cin >> num1;
    cout << "Введите 2 число: ";
    cin >> num2;

    int* num1ptr = &num1;
    int* num2ptr = &num2;
    int** num1dptr = &num1ptr;
    int** num2dptr = &num2ptr;
    int result = **num1dptr + **num2dptr;
    cout <<**num1dptr<<" + "<<**num2dptr<<" = "<< result << "\n";*/

    /*
    4.	Через указатель на указатель на указатель посчитать идеальный вес. Ввести рост и реальный вес, показать сколько кг нужно сбросить или набрать. Идеальный вес = Рост — 110.*/
    /*double weight, height;
    cout << "Введите вес: ";
    cin >> weight;
    cout << "Введите рост: ";
    cin >> height;
    double* weightptr = &weight;
    double** weight2ptr = &weightptr;
    double*** weight3ptr = &weight2ptr;
    double* heightptr = &height;
    double** height2ptr = &heightptr;
    double*** height3ptr = &height2ptr;

    const int CRITERIA = 110;
    double ideal_weight = ***height3ptr - CRITERIA;
    cout << "Идеальный вес = " << ***height3ptr << " - " << CRITERIA << " = " << ideal_weight<<"кг.\n";
    double weight_diff =   ***weight3ptr-ideal_weight;
    cout << "Рекомендуется сбросить: " << ***weight3ptr  << " - "<< ideal_weight << " = " <<weight_diff << "кг.\n";*/

    /*
5.	Создать пятижды указатель. Показать адреса всех элементов цепочки, используя только этот указатель.
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

