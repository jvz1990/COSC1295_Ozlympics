//
// Created by Johan on 13/07/2018.
//

#ifndef ASS1CPP2_GAME_HPP
#define ASS1CPP2_GAME_HPP


#include <vector>
#include "../support/data.hpp"
#include "../persons/person.hpp"

class game {
public:
    explicit game(const data::athlete_type &game_type);

private:
    bool been_ran{false};
    std::vector<person *> persons_attented{};
    const data::athlete_type &game_type;
};


#endif //ASS1CPP2_GAME_HPP
