#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task6()
{
	int A[4][4] = { 0 };
	int x = 0, y;

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			A[i][j] = -10 + rand() % 20;
			printf("A[%d][%d] = %d\t",i, j, A[i][j]);
		}
		printf("\n");
	}

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 1; j < 4; j++)
		{
			if (A[i][j]>A[i][j-1])
			{
				y = A[i][j];
				A[i][j] = A[i][j - 1];
				A[i][j - 1] = y;
			}
		}

	}

	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			printf("A[%d][%d] = %d\t", i, j, A[i][j]);
		}
		printf("\n");
	}
}

void task5()
{
	int A[12][12] = { 0 };
	int x = 0;

	for (size_t i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			A[i][j] = -10 + rand() % 20;
		}
		printf("\n");
	}

}

void task4()
{
	int A[15] = { 0 };
	int x,y;

	for (size_t i = 0; i < 15; i++)
	{
		A[i] = 10 + rand() % 89;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\n\n\n\n\n\n");
	for (size_t i = 0; i < 15; i++)
	{
		y = A[i] / 10;

		x = A[i] % 10;

		A[i] = x * 10 + y;
	}

	for (size_t i = 0; i < 15; i++)
	{

		printf("A[%d] = %d\n", i, A[i]);
	}
}

void task3()
{
	int A[10][10] = { {0},{0} };
	int count = 1;
	int min = 100, max = -100;

	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			A[i][j] = -10 + rand() % 20;
			printf("%d.A[%d][%d] = %d\n",count, i, j, A[i][j]);
			count++;
		}
		printf("\n");
	}

	for (size_t i = 0; i < 10; i++)
	{
		min = 100;

		for (size_t j = 0; j < 10; j++)
		{
			if (A[i][j]<min)
			{
				min = A[i][j];
			}
		}
		printf("%d\t", min);
		if (min > max)
			max = min;
	}
	
	printf("\n\n\nmax %d\n", max);

}

void task2()
{
	const int N = 4;
	const int M = 5;

	int i, j, A[M][N];
	for ( i = 0; i < M; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			printf("A[%d][%d] = ", i, j);
			scanf_s("%d", &A[i][j]);
		}

	}
}

void task1()
{
	const int N = 10;

	int L = 0, R = N, m, A[N],x;
	int flag = 0;

	for (size_t i = 0; i < N; i++)
	{
		A[i] = 0 + rand() % 100;
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\n\n\n\nВведите искомый элемент//");
	scanf_s("%d", &x);

	while (L <= R)
	{
		m = (L + R)/2;
		if (A[m] == x)
		{
			flag = 1;
			break;
		}
		if (x < A[m])
			R = m;
		else {
			L = m + 1;
		}
	}
	if (flag)
	{
		printf("Нашли: A[%d] = %d\n", m, A[m]);
	}
	else
		printf("Такого элемента нету\n");
}

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task;
	int flag;
	do
	{
		system("cls");
		printf("Zadanie:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
		}
		printf("Continue?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}