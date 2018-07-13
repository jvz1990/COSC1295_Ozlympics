//
// Created by Johan on 13/07/2018.
//

#include "athlete.hpp"

athlete::athlete(const std::string &name, const uint8_t age, const data::states &state) : person(name, age, state) {
    this->points = 0;
}

uint16_t &athlete::get_points() const {
    return (uint16_t&) this->points;
}

void athlete::add_points(uint32_t points) {
    this->points += points;
}

