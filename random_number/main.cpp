#include <iostream>

int main() {
    int iterations = 1000;
    int distribution[20]{0};
    srand(time(0));

    for (int i = 0; i < iterations; i++){
        distribution[rand() % 20]++;
    }

    for (int i = 0; i < 20; i++) {
        std::cout << i + 1 << ": " << distribution[i] << std::endl;
    }

    return 0;
}
