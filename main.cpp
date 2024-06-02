#include <iostream>

int main() {
    // Prompt the user to enter three integer values
    std::cout << "Enter three integer values: ";
    int a, b, c;
    std::cin >> a >> b >> c;

    // Allocate dynamic memory for three integer pointers
    int* p_a = new int;
    int* p_b = new int;
    int* p_c = new int;

    // Store the user-entered values in the dynamically allocated memory
    *p_a = a;
    *p_b = b;
    *p_c = c;

    // Display the contents of the variables and pointers
    std::cout << "Variable values:\n";
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    std::cout << "Pointer values:\n";
    std::cout << "*p_a = " << *p_a << ", *p_b = " << *p_b << ", *p_c = " << *p_c << std::endl;

    // Deallocate the dynamically allocated memory
    delete p_a;
    delete p_b;
    delete p_c;

    return 0;
}
