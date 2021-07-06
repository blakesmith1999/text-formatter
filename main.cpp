#include <iostream>
#include <fstream>
#include <string>


int main() {
	std::ifstream myfile("textexample.txt");

	// new lines will be skipped unless we stop it from happening:    
	myfile.unsetf(std::ios_base::skipws);

	// count the newlines with an algorithm specialized for counting:
	unsigned line_count = std::count(
		std::istream_iterator<char>(myfile),
		std::istream_iterator<char>(),
		'\n');

	std::cout << "Lines: " << line_count << "\n";
	return 0;
}


/*
int get_lines(std::ifstream&);

int main(){
	std::string str;
	str = "Test string";

	std::ifstream file;

	file.open("text.txt");

	int number_of_lines = get_lines(file);

	for (int i = 0; i < number_of_lines; i++) {

	}

}

int get_lines(std::ifstream &file) {
	

	do {
//		getline(file, line);
		
		if (line.at(0) != "") {

		}
	} while (!file.eof());

}
*/