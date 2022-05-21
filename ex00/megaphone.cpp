#include <iostream>

void	convertToUpper(int argc, char **argv) {
	for(int i = 1; i < argc; i++) {
		for(int j = 0; argv[i][j]; j++) {
			char upperCaseLetter = toupper(argv[i][j]);
			std::cout << upperCaseLetter;
		}
	}
}

int main(int argc, char	**argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	convertToUpper(argc, argv);
	std::cout << '\n';
	return 0;
}