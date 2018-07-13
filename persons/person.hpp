//
// Created by Johan on 13/07/2018.
//

#ifndef ASS1CPP2_PERSON_HPP
#define ASS1CPP2_PERSON_HPP

#include <string>
#include "../support/data.hpp"

#define MIN_AGE 18
#define MAX_AGE 62

class person {
public:
    explicit
    person(const std::string &name, uint8_t age, const data::states &state);

    virtual void del_me() = 0;

    const std::string &get_name() const;

    const uint8_t get_age() const;

    const data::states &get_state() const;

private:
    const std::string name;
    const uint8_t age;
    const data::states &state;
};


#endif //ASS1CPP2_PERSON_HPP
