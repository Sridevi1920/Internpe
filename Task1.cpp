//1.Create an infinite loop from scratch
#include <iostream>

int main() {
    while (true) {
        std::cout << "This is an infinite loop!" << std::endl;
    }

    return 0;
}
//2.Create an executable comment
#include <iostream>

int main() {
    // This is a single-line comment.
    std::cout << "Hello, World!" << std::endl; // This line prints "Hello, World!"
   
    /*
    This is a multi-line comment.
    It can span across multiple lines.
    */
   
    return 0;
}
//3. Create a named loop
#include <iostream>

int main() {
    int count = 0;
   
    startLoop:
    if (count < 5) {
        std::cout << "Count: " << count << std::endl;
        count++;
        goto startLoop;
    }
   
    std::cout << "Loop finished!" << std::endl;
   
    return 0;
}
//4. Find a single-duplicate in an array of integers
#include <iostream>
#include <unordered_set>
#include <vector>

int findDuplicate(const std::vector<int>& nums) {
    std::unordered_set<int> seen;
   
    for (int num : nums) {
        // If the number is already in the set, it is a duplicate
        if (seen.count(num) > 0) {
            return num;
        }
       
        seen.insert(num); // Add the number to the set
    }
   
    // If no duplicate is found
    return -1;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 4, 5, 6};
   
    int duplicate = findDuplicate(nums);
   
    if (duplicate != -1) {
        std::cout << "Duplicate number: " << duplicate << std::endl;
    } else {
        std::cout << "No duplicates found." << std::endl;
    }
   
    return 0;
}
//5. Find a non-unique duplicate in an array of integers
#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> findNonUniqueDuplicates(const std::vector<int>& nums) {
    std::unordered_map<int, int> frequencyMap;
    std::vector<int> duplicates;
   
    // Count the frequency of each number
    for (int num : nums) {
        frequencyMap[num]++;
    }
   
    // Find numbers with frequency greater than 1
    for (const auto& entry : frequencyMap) {
        if (entry.second > 1) {
            duplicates.push_back(entry.first);
        }
    }
   
    return duplicates;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 4, 5, 6, 6, 6};
   
    std::vector<int> nonUniqueDuplicates = findNonUniqueDuplicates(nums);
   
    if (!nonUniqueDuplicates.empty()) {
        std::cout << "Non-unique duplicates: ";
        for (int num : nonUniqueDuplicates) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No non-unique duplicates found." << std::endl;
    }
   
    return 0;
}
