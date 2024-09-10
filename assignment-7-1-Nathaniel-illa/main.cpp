#include "main.hpp"

int makearray(int numbers[]) {
    srand(time(0));  // Seed the random number generator

    int N = rand() % 11 + 10;  // Random integer between 10 and 20
    for (int i = 0; i < N; i++) {
        numbers[i] = rand() % 100;  // Random value between 0 and 99
    }

    return N;
}

void bubble(int numbers[], int N) {
    for (int i = 0; i < N - 1; i++) {
        if (numbers[i] > numbers[i + 1]) {
            // Swap the elements
            int temp = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = temp;
        }
    }
}

void printout(int numbers[], int N) {
    for (int i = 0; i < N; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

int main() {
    int number[SIZE];
    int last;

    last = makearray(number);
    printout(number, last);

    bubble(number, last);
    printout(number, last);

    // Optional: Uncomment if you want to perform multiple bubble passes
    // for (int i = 0; i < last; i++)
    //     bubble(number, last);
    // printout(number, last);

    return 0;
}