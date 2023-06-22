#include <iostream>
#include <vector>

int main()
{
	float matrix[3][3];

	std::cout << "Input the number: " << '\n';
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	std::cout << std::endl;
	std::cout << "Matrix" << '\n';

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Swap matrix" << std::endl;
	// перевернутая

	for (int i = 0; i < 2; i++)
	{
		for (int j = 1 + i; j < 3; j++)
		{
			float temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

}
