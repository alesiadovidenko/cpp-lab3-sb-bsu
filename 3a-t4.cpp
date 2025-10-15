#include <iostream>
#include <limits> // For std::numeric_limits
using namespace std;

int main() {
    int k, i = 1, sum_k = 0, number;

    cout << "Enter the amount of integers to sum = ";
    cin >> k;

    // Check if k is zero or negative
    if (k <= 0) {
        cout << "It's impossible to count.Number must be greater than zero" << endl;
        return 0; // Exit the program if k is not valid
    }

    while (i <= k) {
        cout << "Enter integer nr. " << i << ": ";
        cin >> number;

        // Check for invalid input
        if (cin.fail()) {
            cout << "Warning: Invalid input. Please enter an integer." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue; // Skip to the next iteration of the loop
        }

        sum_k += number;
        i++;
    }

    cout << "The total sum of " << k << " integers is: " << sum_k << endl;
    return 0;
}
