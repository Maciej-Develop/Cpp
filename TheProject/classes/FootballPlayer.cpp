#include "FootballPlayer.h"

#include <iostream>

#include "../functions/functions.h"

void FootballPlayer::takePossession() {
    this->possessBall = true;
}

void FootballPlayer::move(double distanceFromGoal) {
    this->distanceFromGoal = distanceFromGoal;
}

bool FootballPlayer::shoot() {
    if (!this->possessBall) {
        std::cout << this->name << " tried to shoot but doesn't have the ball." << std::endl;
        return false;
    }
    bool result = (getRandomBetween0and99() * 15 / this->distanceFromGoal) > 50;

    if (result) {
        std::cout << this->name << " scored a goal!" << std::endl;
        this->goalsScored++;
    } else {
        std::cout << this->name << " missed the goal!" << std::endl;
    }
    return result;
}

void FootballPlayer::pass(FootballPlayer &other) {
    if (!this->possessBall) {
        std::cout << this->name << " tried to pass but he doesn't have it." << std::endl;
        return;
    }

    this->possessBall = false;
    other.possessBall = true;

    std::cout << this->name << " passed the ball to " << other.name << std::endl;
}


