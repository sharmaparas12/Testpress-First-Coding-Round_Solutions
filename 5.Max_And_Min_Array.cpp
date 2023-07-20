#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Input the number of elements in the array

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i]; // Input the array elements

    int max_ele = INT_MIN; // Initialize a variable to store the maximum element, set to the minimum possible value
    int min_ele = INT_MAX; // Initialize a variable to store the minimum element, set to the maximum possible value

    // Iterate through each element in the array
    for (auto itr : arr) {
        // Update the maximum and minimum element if needed
        max_ele = max(max_ele, itr);
        min_ele = min(min_ele, itr);
    }

    cout << max_ele << " " << min_ele << endl; // Print the maximum and minimum element

    return 0;
}
