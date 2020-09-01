#include <iostream>
#include <string>

int age = 22;
bool Switch = true;
char Initial = 'S';
std::string name = "Sebastian";
double pi = 3.14;


int main() {
	std::cout << "Enter Your Age:";
	std::cin >> age;
	std::cout << "Your age is : " << age << "\n"; // "\n" Will start a new line. The same as std::endl;
	std::cout << "You are too young ";
}