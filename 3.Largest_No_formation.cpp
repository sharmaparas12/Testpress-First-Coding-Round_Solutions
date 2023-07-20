#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

// Custom comparator function for sorting in descending order
bool customComparator(const std::string& a, const std::string& b) {
    return a + b > b + a;
}

std::string concatenateLargestNumber(const std::vector<int>& nums) {
    std::vector<std::string> numStrings;
    for (int num : nums) {
        numStrings.push_back(std::to_string(num));
    }

    std::sort(numStrings.begin(), numStrings.end(), customComparator);

    std::string result;
    for (const std::string& numStr : numStrings) {
        result += numStr;
    }

    // Special case: If the result is "0", return it directly
    if (result.size() > 0 && result[0] == '0') {
        return "0";
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> nums;
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    std::string largestNumber = concatenateLargestNumber(nums);
    std::cout << "The largest number: " << largestNumber << std::endl;
    return 0;
}
