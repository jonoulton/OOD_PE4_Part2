
#include <iostream>
#include <vector>

void DisplayVector(std::vector<std::vector<int>> retVector)
{
	std::cout << "Vector Contents: " << std::endl;
	for (int i = 0; i < retVector.size(); i++)
	{
		for (int j = 0; j < retVector.size; j++)
		{
			std::cout << retVector[i][j] << std::endl;
		}
	}
}

std::vector<std::vector<int>> CreateBoard()
{
	std::vector<std::vector<int>> retVector;
	for (int i = 0; i < 3; i++)
	{
		std::vector<int> newVector;
		for (int j = 0; j < 3; j++)
		{
			newVector.push_back(0);
		}
		retVector.push_back(newVector);
	}
	return retVector;
}

int main()
{
	std::vector test = CreateBoard();
	return 0;
}
