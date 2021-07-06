#include <iostream>
#include <fstream>
#include <string>


int get_lines(std::fstream&);
void format_lines(std::fstream&);

int main() {

	std::fstream file;

	file.open("text.txt");

	int number_of_lines = get_lines(file);

	for (int i = 0; i < number_of_lines; i++) {
		format_lines(file);
	}

}

int get_lines(std::fstream& file) {
	std::string line("");
	int num_lines;

	do {
		getline(file, line);

		if (line.at(0)) {
			num_lines++;
		}

	} while (!file.eof());

	return num_lines;
}

void format_lines(std::fstream& file) {
	std::string line("");
	if (line != "") {
		for (std::string::iterator it = line.begin(); *it < line[5]; it++) {
			line.erase(*it);
		}
		file << line;
	}
}
