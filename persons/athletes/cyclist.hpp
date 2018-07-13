//
// Created by Johan on 13/07/2018.
//

#ifndef ASS1CPP2_CYCLIST_HPP
#define ASS1CPP2_CYCLIST_HPP


#include "athlete.hpp"

class cyclist : public athlete {
public:
    cyclist(const std::string &name, uint8_t age, const data::states &state);
    uint16_t compete(game *game) override ;
    void del_me() override;

};


#endif //ASS1CPP2_CYCLIST_HPP
