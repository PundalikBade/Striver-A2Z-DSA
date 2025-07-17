#include <iostream>
#include <vector>
using namespace std;

// ✅ Test Cases & Expected Outputs
// Input	Output
// [3, 4, 5, 1, 2]	true
// [1, 2, 3, 4, 5]	true
// [2, 1, 3, 4, 5]	false
// [5, 1, 2, 3, 4]	true
// [1, 3, 2]	false

bool isSortedAndRotated(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    
    for(int i = 0; i < n; ++i) {
        if(nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }
    return count <= 1;
}

int main() {
    vector<vector<int>> testCases = {
        {3, 4, 5, 1, 2},
        {1, 2, 3, 4, 5},
        {2, 1, 3, 4, 5},
        {5, 1, 2, 3, 4},
        {1, 3, 2}
    };

    for (auto& test : testCases) {
        cout << "Input: ";
        for (int num : test) cout << num << " ";
        cout << "\nResult: " << (isSortedAndRotated(test) ? "true" : "false") << "\n\n";
    }

    return 0;
}
