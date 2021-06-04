#include <iostream>

int iterativeFibonacci(int);

int main() {
    iterativeFibonacci(20);
    return 0;
}

int iterativeFibonacci(int n){
    int a = 0, b = 1, i = 2, c;

    switch (n){
        case 0:
            return 0;
        case 1:
            return 1;
    }

    for (i; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
        std::cout << c << ' ';
    }

    return b;
}
