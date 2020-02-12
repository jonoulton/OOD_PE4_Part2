
#include <iostream>
#include <vector>

void DisplayVector(std::vector<std::vector<int>> retVector)
{
	std::cout << "Vector Contents: " << std::endl;
	for (int i = 0; i < retVector.size(); i++)
	{
		for (int j = 0; j < retVector.size(); j++)
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

std::vector<int> GetPlayerChoice() {
	std::vector<int> choice;
	int rowChoice = 0;
	int colChoice = 0;
	std::cout << "Please Enter Row Choice: ";
	std::cin >> rowChoice;
	std::cout << std::endl;

	std::cout << "Please Enter Col Choice: ";
	std::cin >> colChoice;
	std::cout << std::endl;

	choice.push_back(rowChoice);
	choice.push_back(colChoice);

	return choice;
}

int main()
{
	std::vector test = CreateBoard();
	return 0;
}
