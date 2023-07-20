#include<bits/stdc++.h>
using namespace std;

int main() {
    // Declare a string variable to store user input
    string str;
    cin >> str;

    // Declare two pointers: low and high
    // 'low' points to the beginning of the string, and 'high' points to the end
    int low = 0;
    int high = str.size() - 1;

    // This loop will reverse the string 'str'
    while (low <= high) {
        // Swap characters at positions 'low' and 'high'
        swap(str[low], str[high]);

        // Move 'low' pointer to the right
        low++;

        // Move 'high' pointer to the left
        high--;
    }

    // Print the reversed string
    cout << str << endl;
}
