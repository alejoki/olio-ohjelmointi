#include "chef.h"
#include "italianchef.h"

int main() {
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    ItalianChef chef2("Mario");
    chef2.makeSalad();
    chef2.makeSoup();
    chef2.makePasta();

    return 0;
}
