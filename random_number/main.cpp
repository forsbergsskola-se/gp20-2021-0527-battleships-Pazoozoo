#include <iostream>

int main() {
    int iterations = 1500;
    float distribution[20]{0};
    srand(time(0));

    for (int i = 0; i < iterations; i++){
        distribution[rand() % 20]++;
    }

    for (int i = 0; i < 20; i++) {
        float percentage = (distribution[i] / iterations) * 100;
        std::cout << i + 1 << ": " << distribution[i] << "  " << percentage << "%" << std::endl;
    }

    return 0;
}
