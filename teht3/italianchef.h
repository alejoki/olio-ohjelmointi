#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
class ItalianChef : public Chef {

private:
    int jauhot = 250;
    int vesi = 100;
public:
    ItalianChef(string n) : Chef(n){
        cout << "ItalianChef " << name << " konstruktori" << endl;
    }

    ~ItalianChef() {
        cout << "ItalianChef " << name << " destruktori" << endl;
    }

    string getName() {
        return name;
    }

    void makePasta() {
        cout << "ItalianChef " << name << " makes pasta with special recipe" << endl;
        cout << "ItalianChef " << name << " uses water = " << vesi << endl;
        cout << "ItalianChef " << name << " uses flour = " << jauhot << endl;
    }
};
#endif // ITALIANCHEF_H
