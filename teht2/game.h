#ifndef GAME_H
#define GAME_H
class Game
{
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
public:
    Game(int maxNumber);
    ~Game();
    // Member function to play the game
    void play();
};

#endif // GAME_H


// int main()
// {
//     srand((unsigned) time(NULL));
//     int random = 1 + (rand() % 20);
//     int arvaus;

//     std::cout << "Arvaa luku\n";
//     std::cin >> arvaus;

//     while (arvaus != random) {
//         if (arvaus > random) {
//             std::cout << "Luku on pienempi\n";
//             std::cin >> arvaus;
//         }
//         if (arvaus < random) {
//             std::cout << "Luku on suurempi\n";
//             std::cin >> arvaus;
//         }
//     }

//     std::cout << "Oikea vastaus\n";
// }
