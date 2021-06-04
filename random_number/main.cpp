#include <iostream>
using namespace std;

int main() {
    int iterations = 15000;
    float distribution[20]{0};
    srand(time(0));

    for (int i = 0; i < iterations; i++){
        distribution[rand() % 20]++;
    }

    for (int i = 0; i < 20; i++) {
        float percentage = (distribution[i] / iterations) * 100;
        cout << "Number " << i + 1 << ": " << distribution[i] << " times (" << percentage << "%)" << endl;
    }

    float averageResult = iterations / 20;
    float averagePercent = (averageResult / iterations) * 100;
    cout << "Ideal distribution per number: " << averageResult << " times (" << averagePercent << "%)" << endl;

    return 0;
}
