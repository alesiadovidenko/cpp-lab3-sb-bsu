#include <iostream>
using namespace std;

int main() {
    int k, i = 1, sum_k = 0, number;

    cout << "Enter the amount of integers to sum = ";
    cin >> k;

    // Check if k is zero
    if (k <= 0) {
        cout << "It's impossible to count." << endl;
        return 0; // Exit the program if k is not valid
    }

    do {
        cout << "Enter integer nr. " << i << ": ";
        while (!(cin >> number)) { // Validate input
            cout << "Invalid input. Please enter an integer: ";
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
        sum_k += number;
        i++;
    } while (i <= k);

    cout << "The total sum of " << k << " integers is: " << sum_k << endl;
    return 0;
}
