//
// Created by Johan on 13/07/2018.
//

#ifndef ASS1CPP2_DATA_HPP
#define ASS1CPP2_DATA_HPP

#include <string>

class data {
public:
    static const std::string athlete_names[30];

    static const std::string referee_names[10];

    enum athlete_type {
        swimmer, cyclist, sprinter, super_athlete
    };

    enum states {
        nsw, qld, sa, tas, vic, wa
    };
};


#endif //ASS1CPP2_DATA_HPP
