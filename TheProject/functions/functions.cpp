#include "functions.h"

#include <cmath>
#include <stdexcept>
#include <random>


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

std::pair<int, int> euclideanDivision(int dividend, int divisor) {
    if (divisor == 0) {
        throw std::invalid_argument("Divisor cannot be zero");
    }
    int first = dividend / divisor;
    int second = dividend % divisor;
    return std::make_pair(first, second);
}

unsigned gcd(unsigned a, unsigned b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

unsigned getRandomBetween0and99() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 99);
    return dis(gen);
}
