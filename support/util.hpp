//
// Created by Johan on 13/07/2018.
//

#ifndef ASS1CPP2_UTIL_HPP
#define ASS1CPP2_UTIL_HPP


#include <regex>
#include <random>
#include <chrono>

class util
{
public:
    // singleton - needed for rng
    static util& get_instance()
    {
        static util instance;
        return instance;
    }

    static uint32_t get_user_input(const std::string& prompt, const std::regex& regex);
    static int32_t random_int(uint32_t min, uint32_t max);
    static long long get_time_ns();

    template <typename T>
    struct deleter : std::unary_function<const T*, void>
    {
        void operator()(const T* ptr) const
        {
            delete ptr;
        }
    };

    std::mt19937 &get_rng();

private:
    std::mt19937 rng;

    util()
    {
        rng.seed(static_cast<unsigned int>(util::get_time_ns()));
    }
};

#endif //ASS1CPP2_UTIL_HPP
