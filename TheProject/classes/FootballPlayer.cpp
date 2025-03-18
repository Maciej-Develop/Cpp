#include "FootballPlayer.h"

#include <iostream>

#include "../functions/functions.h"

FootballPlayer::FootballPlayer(const std::string &name, int goals_scored)
    : name(name), goalsScored(goals_scored) {}

FootballPlayer::FootballPlayer(const FootballPlayer &other)
    : name(other.name + " copy"), goalsScored(other.goalsScored) {}


void FootballPlayer::takePossession(Ball & ball) {
    this->possessBall = true;
    ball.distanceFromTheGoal = this->distanceFromGoal;
}

void FootballPlayer::move(double distanceFromGoal) {
    this->distanceFromGoal = distanceFromGoal;
}

bool FootballPlayer::shoot(Ball & ball) {
    if (!this->possessBall) {
        std::cout << this->name << " tried to shoot but doesn't have the ball." << std::endl;
        return false;
    }
    ball.distanceFromTheGoal = 0;
    bool result = (getRandomBetween0and99() * 15 / this->distanceFromGoal) > 50;
    this->possessBall = false;
    if (result) {
        std::cout << this->name << " scored a goal!" << std::endl;
        this->goalsScored++;
    } else {
        std::cout << this->name << " missed the goal!" << std::endl;
    }
    return result;
}

void FootballPlayer::pass(Ball & ball,FootballPlayer &other) {
    if (!this->possessBall) {
        std::cout << this->name << " tried to pass but he doesn't have it." << std::endl;
        return;
    }

    this->possessBall = false;
    ball.distanceFromTheGoal = other.distanceFromGoal;
    other.possessBall = true;

    std::cout << this->name << " passed the ball to " << other.name << std::endl;
}


