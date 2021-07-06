#include <iostream>
#include <fstream>
#include <string>


int get_lines(std::ifstream&);

int main(){

	std::ifstream file;

	file.open("text.txt");

	int number_of_lines = get_lines(file);

	for (int i = 0; i < number_of_lines; i++) {

	}

}

int get_lines(std::ifstream &file) {
	std::string line ("");
	int num_lines;

	do {
		getline(file, line);
		
		if (line.at(0)) {
			num_lines++;
		}

	} while (!file.eof());

	return num_lines;
}
