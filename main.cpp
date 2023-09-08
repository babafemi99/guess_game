#include <iostream>
#include <random>

void countElements(int pInt[250], int count);

int main() {

    int random;
    int min;
    int max;



    // get min and max random numbers from user.
    std::cout << "Enter Minimum Number" << std::endl;
    std::cin >> min;
    std::cout << "Enter Maximum Number" << std::endl;
    std::cin >> max;

    int guessArr [max];
    int guessCount = 0;

    // generate a random number ranging from min to max
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> distribution(min, max);
    random = distribution(mt);
    std::cout << random<< std::endl;


    while (true) {
        int guess;

        // get guess number from user
        std::cout << "guess your number" << std::endl;
        std::cin>> guess;

        // update results of guess
        guessArr[guessCount] = guess;
        guessCount ++;
        if (guess == random) {
            std::cout << "Correct guess" << std::endl;
            break;
        } else if ( guess > random) {

            std::cout << "Wrong guess. Too high, try again" << std::endl;
        } else {

            std::cout << "Wrong guess. Too low, try again" << std::endl;
        }
    }

    // print out results inputted into the system
    countElements(guessArr, guessCount);
    std::cout << "\n";

    return 0;

}

void countElements(int pInt[250], int count) {
    std:: cout << "INPUT DETAILS ARE " << std::endl;
    for (int i = 0; i < count; i++) {
        std::cout<< pInt[i] << "\t";
    }
}
