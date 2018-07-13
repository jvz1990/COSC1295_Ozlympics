//
// Created by Johan on 13/07/2018.
//

#ifndef ASS1CPP2_ATHLETE_HPP
#define ASS1CPP2_ATHLETE_HPP


#include "../person.hpp"
#include "../../games/game.hpp"

class athlete : public person {
public:
    explicit
    athlete(const std::string &name, uint8_t age, const data::states &state);

    virtual uint16_t compete(game *game) = 0;

    uint16_t &get_points() const;

    void add_points(uint32_t points);

private:
    uint16_t points;
protected:
    std::vector<game *> games_attended{};
};


#endif //ASS1CPP2_ATHLETE_HPP
