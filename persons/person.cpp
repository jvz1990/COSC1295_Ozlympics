//
// Created by Johan on 13/07/2018.
//

#include "person.hpp"

person::person(const std::string &name, const uint8_t age, const data::states &state) :
        name(name), age(age), state(state) {}

const std::string &person::get_name() const {
    return name;
}

const uint8_t person::get_age() const {
    return age;
}

const data::states &person::get_state() const {
    return state;
}