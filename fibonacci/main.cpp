#include <iostream>

int iterativeFibonacci(int);
int recursiveFibonacci(int);

int main() {
    int input = 20;
    int result = 0;
    std::cout << "Input: " << input << std::endl;
    result = iterativeFibonacci(input);
    std::cout << "Iterative: " << result << std::endl;
    result = recursiveFibonacci(input);
    std::cout << "Recursive: " << result << std::endl;
    return 0;
}

int iterativeFibonacci(int n){
    int a = 0, b = 1, c = 0;

    switch (n){
        case 0:
            return 0;
        case 1:
            return 1;
    }

    for (int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int recursiveFibonacci(int n){
    if (n < 2)
        return n;
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}
