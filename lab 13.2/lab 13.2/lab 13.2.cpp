// lab 13.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#define N 2
#define RIZNYCA(x, z) (x - z)
#define SQR(x) (x)*(x)
#define MIN(left,right) ((left)<(right))?(left):(right) 
#define MAX(left,right) ((left)>(right))?(left):(right) 
#define PRINTI(w) puts("Value"); \
 printf(#w"= %d\n",w)
#define PRINTR(w) puts ("Result: "); \
  printf (#w "=% f \ n",(float)w)

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, z,
		left, right, // auxiliary variables
		result; // minimum (maximum) between two (three) numbers
	char ch;
	do
	{
#if N > 1
		puts("Determine the maximum number between the three ");
		puts("Enter 3 numbers (x,y,z)");
		scanf_s("%d", &x);
		PRINTI(x);
		scanf_s("%d", &y);
		PRINTI(y);
		scanf_s("%d", &z);
		PRINTI(z);
		left = RIZNYCA(x, z);
		left = SQR(left);
		right = RIZNYCA(x, y);
		
		result = MIN(left, right);
		PRINTR(result);
		puts("Repeat? y /n "); ch = _getch();
#else //N <= 1
		{
			puts("Find the minimum among the two");
			puts("Enter 3 numbers (x,y,z)");
			scanf_s("%d", &x);
			PRINTI(x);
			scanf_s("%d", &y);
			PRINTI(y);
			scanf_s("%d", &z);
			PRINTI(z);
			left = RIZNYCA(x, y);
			right = RIZNYCA(y, z);
			result = MAX(left, right);
			PRINTR(result);
			puts("continue? (y/n) "); ch = _getch(); }
#endif 
	} while (ch == 'y' || ch == 'Y');
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
