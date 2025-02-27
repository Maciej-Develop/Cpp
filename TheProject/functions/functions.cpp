#include "functions.h"

#include <cmath>


bool isPrime(unsigned number) {
    if (number <= 1) {
        return false;
    }
    if (number == 2) {
        return true;
    }
    if (number % 2 == 0) {
        return false;
    }
    unsigned x = 3;
    while (x <= std::abs(std::sqrt(number))) {
        if (number % x == 0) {
            return false;
        }
        x += 2;
    }
    return true;
}

bool isPalindrome(const std::string &myInputString) {
    unsigned front = 0;
    unsigned back = myInputString.length() - 1;
    while (front <= back) {
        if (myInputString[front] != myInputString[back]) {
            return false;
        }
        front++;
        back--;
    }
    return true;
}
