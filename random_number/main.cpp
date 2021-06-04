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
    cout << "\nIdeal distribution per number: " << idealResult << " times (" << idealPercent << "%)" << endl;

    int number = 1;
    int maxNumber = 0;
    int minNumber = 0;
    float maxOffset = 0.0f;
    float minOffset = 100.0f;

    for (float amount : distribution){
        float percent = (amount / iterations) * 100.0f;
        float offset = abs(percent - idealPercent);

        if (offset > maxOffset) {
            maxOffset = offset;
            maxNumber = number;
        }
        if (offset < minOffset) {
            minOffset = offset;
            minNumber = number;
        }
        number++;
    }

    cout << "Maximum offset: Number " << maxNumber << " (" << maxOffset << "%)" << endl;
    cout << "Minimum offset: Number " << minNumber << " (" << minOffset << "%)" << endl;

    return 0;
}
