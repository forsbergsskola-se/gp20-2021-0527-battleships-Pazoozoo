#include <iostream>
using namespace std;

int main() {
    int iterations = 14000;
    float distribution[20]{};
    srand(time(0));

    for (int i = 0; i < iterations; i++){
        distribution[rand() % 20]++;
    }

    for (int i = 0; i < 20; i++) {
        float percent = (distribution[i] / iterations) * 100.0f;
        cout << "Number " << i + 1 << ": " << distribution[i] << " times (" << percent << "%)" << endl;
    }

    float idealResult = iterations * 0.05f;
    float idealPercent = (idealResult / iterations) * 100.0f;
    cout << "Ideal distribution per number: " << idealResult << " times (" << idealPercent << "%)\n" << endl;

    return 0;
}
