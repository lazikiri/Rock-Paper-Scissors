#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    int randomNumber = rand() % 3;
    int userNumber;

    std::cout << "Type 0 for rock, 1 for paper, 2 for scissors.\n";
    std::cin >> userNumber;

    if (randomNumber == 0) {
        std::cout << "Rock\n";
        if (userNumber == 2) {
            std::cout << "You lose.";
        }

        if (userNumber == 0) {
            std::cout << "You tied.";
        }

        else {
            std::cout << "You win!";
        }
    }

    if (randomNumber == 1) {
        std::cout << "Paper\n";
        if (userNumber == 0) {
            std::cout << "You lose.";
        }

        if (userNumber == 1) {
            std::cout << "You tied.";
        }

        else {
            std::cout << "You win!";
        }
    }

    if (randomNumber == 2) {
        std::cout << "Scissors\n";
        if (userNumber == 1) {
            std::cout << "You lose.";
        }

        if (userNumber == 2) {
            std::cout << "You tied.";
        }

        else {
            std::cout << "You win!";
        }
    }

    std::cout << "\n";
    std::cout << randomNumber;

    return 0;
}
