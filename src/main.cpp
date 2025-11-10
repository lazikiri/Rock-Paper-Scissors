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
        std::cout << "The enemy picked rock.\n";
    }

    if (randomNumber == 1) {
        std::cout << "The enemy picked paper.\n";
    }

    if (randomNumber == 2) {
        std::cout << "The enemy picked scissors.\n";
    }

    if (userNumber == 0) {
        std::cout << "You picked rock.\n";
        if (randomNumber == 1) {
            std::cout << "You lose.";
        }

        if (randomNumber == 0) {
            std::cout << "You tied.";
        }

        else {
            std::cout << "You win!";
        }
    }

    if (userNumber == 1) {
        std::cout << "You picked paper.\n";
        if (randomNumber == 0) {
            std::cout << "You lose.";
        }

        if (randomNumber == 1) {
            std::cout << "You tied.";
        }

        else {
            std::cout << "You win!";
        }
    }

    if (userNumber == 2) {
        std::cout << "You picked scissors.\n";
        if (randomNumber == 0) {
            std::cout << "You lose.";
        }

        if (randomNumber == 2) {
            std::cout << "You tied.";
        }

        else {
            std::cout << "You win!";
        }
    }

    std::cout << "\n";
    std::cout << "The enemy's number was: " << randomNumber;

    return 0;
}
