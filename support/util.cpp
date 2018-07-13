//
// Created by Johan on 13/07/2018.
//

#include "util.hpp"

#include <sstream>
#include <iostream>

uint32_t util::get_user_input(const std::string& prompt, const std::regex& regex)
{
    std::string input_str;
    std::cout << prompt << std::endl;
    std::getline(std::cin, input_str);

    while (!std::regex_match(input_str, regex))
    {
        std::cout << "User input error" << std::endl << " Try again" << std::endl;
        std::getline(std::cin, input_str);
    }

    uint32_t ret;
    std::stringstream(input_str) >> ret;
    std::cout << "User input: " << static_cast<uint32_t>(ret) << std::endl;
    return ret;
}

int32_t util::random_int(const uint32_t min, const uint32_t max)
{
    std::uniform_int_distribution<uint32_t> uniform_int_distribution(min, max);
    return uniform_int_distribution(util::get_instance().get_rng());
}

long long int util::get_time_ns()
{
    return std::chrono::system_clock::now().time_since_epoch().count();
}

std::mt19937 &util::get_rng() {
    return rng;
}
