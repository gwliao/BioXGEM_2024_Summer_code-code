#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cout << "Please input a number: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print spaces
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        // Print numbers
        for (int j = 1; j <= i; ++j) {
            cout << j % 10;  // Use modulus operator to cycle numbers from 0 to 9
        }
        for (int j = i - 1; j >= 1; --j) {
            cout << j % 10;  // Use modulus operator to cycle numbers from 0 to 9
        }
        cout << endl;
    }


    cout << "Please input two integers n1 and n2 (n1 ≤ n2),\ncalculate the sum from n1 to n2. \nDetermine if n1 is greater than n2, \nand allow repeated inputs for execution. \n";
    char again;
    do {
        int n1, n2, sum = 0;
        cout << "Number 1: ";
        cin >> n1;
        cout << "Number 2: ";
        cin >> n2;

        if (n1 > n2) {
            cout << "Error!! Number 1 > Number 2!!" << endl;
        } else {
            for (int i = n1; i <= n2; ++i) {
                sum += i;
            }
            cout << "Sum = " << sum << endl;
        }

        cout << "Again(Y/N)?? ";
        cin >> again;
    } while (again == 'Y' || again == 'y');


    return 0;
}



