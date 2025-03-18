#ifndef FOOTBALLPLAYER_H
#define FOOTBALLPLAYER_H
#include <string>

#include "Ball.h"

class FootballPlayer {
    std::string name;
    int goalsScored;
    double distanceFromGoal = 15.0;
    bool possessBall = false;

public:
    FootballPlayer(const std::string &name, int goals_scored);

    FootballPlayer(const FootballPlayer &other);

    void takePossession(Ball & ball);

    void move(double distanceFromGoal);

    bool shoot(Ball & ball);

    void pass(Ball & ball, FootballPlayer &other);
};


#endif //FOOTBALLPLAYER_H
