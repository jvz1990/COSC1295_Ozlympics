#include <iostream>
#include "persons/person.hpp"
#include "persons/athletes/athlete.hpp"
#include "persons/athletes/cyclist.hpp"

using namespace std;

int main() {

    // testing only
    auto c = new cyclist("a name", 28, data::states::nsw);

    cout << "age " << (int) c->get_age() << " name " << c->get_name() << " state " << c->get_state() << endl
         << " points " << c->get_points() << endl;

    c->add_points(51L);

    cout << "age " << (int) c->get_age() << " name " << c->get_name() << " state " << c->get_state() << endl
         << " points " << c->get_points() << endl;

    auto g = new game(data::athlete_type::cyclist);

    cout << c->compete(g) << endl;

    c->del_me();


    system("pause");
    return 0;
}