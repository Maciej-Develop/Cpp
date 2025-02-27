#include <iostream>

#include "classes/FootballPlayer.h"
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

    /*std::cout << std::boolalpha << isPrime(5) << std::endl;
    std::cout << std::boolalpha << isPrime(10) << std::endl;
    std::cout << std::boolalpha << isPalindrome("hello") << std::endl;
    std::cout << std::boolalpha << isPalindrome("kayak") << std::endl*/

    /*int dividend = 10;
    int divisor = 3;
    std::pair<int, int> pair = euclideanDivision(dividend,divisor);
    std::cout << dividend << " = " << pair.first << " x " << divisor << " + " << pair.second << std::endl;*/

    /*std::cout << gcd(423,135) << std::endl;*/

    FootballPlayer player("Kylian", 0);
    FootballPlayer player2("Kevin", 0);

    FootballPlayer evilPlayer(player);
    FootballPlayer evilPlayer2(player2);

    evilPlayer.takePossession();
    evilPlayer.pass(evilPlayer2);
    evilPlayer2.shoot();

    player.takePossession();
    player.pass(player2);
    player2.shoot();
}
