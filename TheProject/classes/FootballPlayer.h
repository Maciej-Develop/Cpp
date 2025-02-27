#ifndef FOOTBALLPLAYER_H
#define FOOTBALLPLAYER_H
#include <string>

class FootballPlayer {
    std::string name;
    int goalsScored;
    double distanceFromGoal;
    bool possessBall;

public:
    FootballPlayer(const std::string &name, int goals_scored): name(name), goalsScored(goals_scored),
                                                               distanceFromGoal(15), possessBall(false) {
    }

    FootballPlayer(const FootballPlayer &other) {
        name = other.name + " copy";
        goalsScored = other.goalsScored;
        distanceFromGoal = other.distanceFromGoal;
        possessBall = other.possessBall;
    }

    void takePossession();

    void move(double distanceFromGoal);

    bool shoot();

    void pass(FootballPlayer &other);
};


#endif //FOOTBALLPLAYER_H
