#include <iostream>
using namespace std;

class OddSeries {
public:
    void printOdd(int n) {
        if (n == 0) return;      // Base case

        printOdd(n - 1);         // Recursive call

        // Print comma BEFORE number except for first one
        if (n > 1)
            cout << ", ";

        cout << (2 * n - 1);
    }
};

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    OddSeries obj;
    obj.printOdd(a);

    return 0;
}
