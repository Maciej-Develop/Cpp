#include <cmath>
#include <iostream>

#include "classes/FootballPlayer.h"
#include "functions/functions.h"
#include "memory/AudioPlayer.h"
#include "memory/Song.h"

void triggerMemoryLeak() {
    while (true) {
        Song * song = new Song("A","B","C", nullptr,0);
    }
}

int main() {
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

    /*FootballPlayer player("Kylian", 0);
    FootballPlayer player2("Kevin", 0);
    Ball ball;

    FootballPlayer evilPlayer(player);
    FootballPlayer evilPlayer2(player2);

    evilPlayer.takePossession(ball);
    std::cout << "ball distance : " << ball.distanceFromTheGoal << std::endl;
    evilPlayer.pass(ball,evilPlayer2);
    std::cout << "ball distance : " << ball.distanceFromTheGoal << std::endl;
    evilPlayer2.shoot(ball);
    std::cout << "ball distance : " << ball.distanceFromTheGoal << std::endl;

    player.takePossession(ball);
    std::cout << "ball distance : " << ball.distanceFromTheGoal << std::endl;
    player.pass(ball,player2);
    std::cout << "ball distance : " << ball.distanceFromTheGoal << std::endl;
    player2.shoot(ball);
    std::cout << "ball distance : " << ball.distanceFromTheGoal << std::endl;*/

    const int audioBufferSize = 10000;
    const int audioSampleRate = 44100;
    const int frequency = 440;
    float* audioBuffer = new float[audioBufferSize];
    for (int i = 0; i < audioBufferSize; i++) {
        audioBuffer[i] = std::sin(2 * M_PI * i / audioBufferSize);
    }


    //created on the stack
    //Song mySong("mon sinus","Huntrill", "replica2", audioBuffer, audioBufferSize);
    //created on the heap
    auto mySong = new Song("mon sinus","Huntrill", "replica2",audioBuffer, audioBufferSize);
    //Song mySongCopy = *mySong;
    //Song& mySongRef = *mySong;

    mySong->setTitle("Hello World!");

    //triggerMemoryLeak();

    AudioPlayer audioManager(1.0f);
    audioManager.play(mySong);
}
