#include <iostream>

int reverseNumber(int number) {
    int reversedNumber = 0;

    while (number != 0) {
        int lastDigit = number % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        number /= 10;
    }

    return reversedNumber;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int reversedNum = reverseNumber(num);
    std::cout << "Reversed number: " << reversedNum << std::endl;

    return 0;
}
