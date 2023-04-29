// ConsoleAppli.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define N 10 
int main()
{
    short arra[N][N]{};
	for (size_t i = 0; i < N; ++i)
	{
		for (size_t j = 0; j < N; ++j)
		{
			if (i != j) {
				arra [i][j] = 1;
			}else{
				arra[i][j] = 0;
			}
		}
	}
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < N; j++)
		{
			std::cout << arra[i][j];
		}
		std::cout <<"\n";
	}
    return 0;
}