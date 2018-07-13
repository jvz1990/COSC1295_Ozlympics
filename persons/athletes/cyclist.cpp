//
// Created by Johan on 13/07/2018.
//

#include <iostream>
#include "cyclist.hpp"
#include "../../support/util.hpp"

#define MIN_SCORE 500
#define MAX_SCORE 800

cyclist::cyclist(const std::string &name, const uint8_t age, const data::states &state) : athlete(name, age, state) {}

void cyclist::del_me() {
    delete this;
}

uint16_t cyclist::compete(game *game) {
    this->games_attended.push_back(game);
    return static_cast<uint16_t>(util::random_int(MIN_SCORE, MAX_SCORE));
}
