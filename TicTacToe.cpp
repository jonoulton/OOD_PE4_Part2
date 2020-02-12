
#include <iostream>
#include <vector>

std::vector<std::vector<int>> CreateBoard() {
	std::vector<std::vector<int>> retVector;
	for (int i=0; i<3; i++) {
		std::vector<int> newVector;
		for (int j=0; j<3; j++) {
			newVector.push_back(0);
		}
		retVector.push_back(newVector);
	}
	return retVector;
}


int main() {
	std::vector test = CreateBoard();
	return 0;
}
