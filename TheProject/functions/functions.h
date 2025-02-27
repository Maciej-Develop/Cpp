#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>

bool isPrime(unsigned number);

bool isPalindrome(const std::string &myInputString);

std::pair<int, int> euclideanDivision(int dividend, int divisor);

unsigned gcd(unsigned a, unsigned b);

#endif //FUNCTIONS_H
