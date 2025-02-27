#include <iostream>

#include "functions/functions.h"

int main() {
    std::cout << "Hello World!" << std::endl;

    /*int i = 0;
    while (i < 3) {
        try {
            std::cout << "Enter a number : ";
            std::string s;
            std::getline(std::cin, s);
            const int x = std::stoi(s);
            std::cout << "You entered : " << x << std::endl;
            i++;
        } catch (const std::exception &e) {
            std::cout << "Invalid entry. Enter a number" << std::endl;
        }
    }*/

    std::cout << std::boolalpha << isPrime(5) << std::endl;
    std::cout << std::boolalpha << isPrime(10) << std::endl;
    std::cout << std::boolalpha << isPalindrome("hello") << std::endl;
    std::cout << std::boolalpha << isPalindrome("kayak") << std::endl;
}
