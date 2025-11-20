#include <iostream>
using namespace std;

class OddSeries {
public:
    // Generate series according to Problem-3 rule
    void generate(int a) {
        if (a <= 0) {
            cout << "Invalid input (enter a positive integer)\n";
            return;
        }

        // Determine how many odd numbers to print
        int count = (a % 2 == 1) ? a : (a - 1);

        // Print the first 'count' odd numbers
        for (int i = 1; i <= count; ++i) {
            cout << (2 * i - 1);           // i-th odd number
            if (i != count) cout << ", ";
        }
        cout << '\n';
    }
};

int main() {
    int a;
    cout << "Enter a number: ";
    if (!(cin >> a)) {
        cout << "Invalid input\n";
        return 0;
    }

    OddSeries series;
    series.generate(a);

    return 0;
}
