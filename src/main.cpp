#include <iostream>
#include <string>

int main(int argc, char * argv[]) {
	/* const char * s are boring, why not use strings? */
	std::cout << std::string{"hello world!"} << std::endl;
	return 0;
}
