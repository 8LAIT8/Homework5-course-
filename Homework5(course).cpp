/*1)
#include <iostream>
int main() {
	unsigned long int Perimeter(unsigned short int SIDE1, unsigned short int SIDE2);
	return 0;
}*/
/*2)
#include <iostream>
int main() {
	unsigned short int length, width;
	std::cout << "Enter the length : ";
	std::cin >> length;
	std::cout << "Enter the width : ";
	std::cin >> width;
	
	unsigned short int Perimeter = 2 * length + 2 * width;
	std::cout << "Result ="<< Perimeter;
	return 0;
}*/
/*5)-6)#include <iostream>
using namespace std;

int division(unsigned short int a, unsigned short int b);

int main() {
    unsigned short int num1, num2;

    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    float result = division(num1, num2);

    if (result == -1) {
        cout << "Division by zero is not allowed." << endl;
    }
    else {
        cout << "The result of division is: " << result << endl;
    }

    return 0;
}


int division(unsigned short int a, unsigned short int b) {
    if (b == 0) {
        return -1; 
    }
    return a / b; 
}
*/

