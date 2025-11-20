#include <iostream>
#include <vector>
#include <map>
using namespace std;

class MultipleCounter {
public:
    map<int, int> countMultiples(const vector<int>& nums) {
        map<int, int> result;

        // Initialize keys 1 to 9
        for (int i = 1; i <= 9; i++) {
            result[i] = 0;
        }

        // Count multiples
        for (int n : nums) {
            for (int d = 1; d <= 9; d++) {
                if (n % d == 0) {
                    result[d]++;
                }
            }
        }

        return result;
    }
};

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    vector<int> nums(size);

    cout << "Enter the numbers:\n";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    MultipleCounter obj;
    map<int, int> output = obj.countMultiples(nums);

    // Print output
    cout << "{";
    for (auto it = output.begin(); it != output.end(); ++it) {
        cout << it->first << ": " << it->second;
        auto nextIt = it;
        ++nextIt;
        if (nextIt != output.end()) cout << ", ";
    }
    cout << "}\n";

    return 0;
}
