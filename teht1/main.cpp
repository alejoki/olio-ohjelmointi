#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   srand((unsigned) time(NULL));
   int random = 1 + (rand() % 20);
   int arvaus;

   std::cout << "Arvaa luku\n";
   std::cin >> arvaus;

   while (arvaus != random) {
       if (arvaus > random) {
           std::cout << "Luku on pienempi\n";
           std::cin >> arvaus;
       }
       if (arvaus < random) {
           std::cout << "Luku on suurempi\n";
           std::cin >> arvaus;
       }
   }

   std::cout << "Oikea vastaus\n";
}
