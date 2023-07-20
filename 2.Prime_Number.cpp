#include <bits/stdc++.h>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    // Check for divisibility from 2 to the square root of the number
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false; // The number is divisible by 'i', so it's not prime
        }
    }

    return true; // If no divisors found, the number is prime
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." <<endl;
    } else {
        cout << num << " is not a prime number." <<endl;
    }

    return 0;
}
