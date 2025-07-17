#include <iostream>
#include <vector>
using namespace std;



// Input:        [0,0,1,1,1,2,2,3,3,4]
// Unique Count: 5
// Modified:     [0, 1, 2, 3, 4]

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    int i = 0; // Slow pointer

    for (int j = 1; j < n; j++) { // Fast pointer
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j]; // Copy unique value
        }
    }
    return i + 1; // Count of unique elements
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    
    int k = removeDuplicates(nums);
    
    cout << "Unique Count: " << k << "\n";
    cout << "Modified Array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
