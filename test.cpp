#include <iostream>
using namespace std; 

// Define the function with parameters for P, r, and n
void data(int &P, int &r, int &n) {
    cout << "Loan amount needed to be lended: ";
    cin >> P;
    cout << "Interest rate: ";
    cin >> r;
    cout << "Period to repay the loan: ";
    cin >> n;
}

int main() {
    int c = 1, P, r, n;  // Initialize c to 1

    // While loop to keep the program running
    while (c == 1) {
        data(P, r, n);  // Call data() with references to P, r, n
        cout << "Period to repay the loan is: " << n << endl;

        // Ask user if they want to continue
        cout << "Enter 1 to continue or 0 to exit: ";
        cin >> c;
    }

    return 0;
}
