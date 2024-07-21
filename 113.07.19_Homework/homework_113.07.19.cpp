#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPrime(int n2) {
    if(n2 <= 1) return false;
    if(n2 == 2) return true;
    if(n2 % 2 == 0) return false;
    for(int i2 = 3; i2 * i2 <= n2; i2 += 2) {
        if(n2 % i2 == 0) return false;
    }
    return true;
    }


int main() {
    int n;
    cout << "Please input a number: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        string line;
        for (int j = 1; j <= i; ++j) {
            line += to_string(j % 9 == 0 ? 9 : j % 9);
        }
        for (int j = i-1; j >= 1; --j) {
            line += to_string(j % 9 == 0 ? 9 : j % 9);
        }
        cout << string(n-i, ' ') << line << string(n-i, ' ') << endl;
    }

    cout << "\n==========================================\n";
    cout << "Please input two integers n1 and n2 (n1 ≤ n2), \ncalculate the sum from n1 to n2. \nDetermine if n1 is greater than n2, \nand allow repeated inputs for execution.\n\n";

    int n1, n2;
    char again;
    do {
        cout << "Number 1: ";
        cin >> n1;
        cout << "Number 2: ";
        cin >> n2;
        if(n1 > n2) {
            cout << "Error!! Number 1 > Number 2!!\n";
            continue;
        }
        int sum = 0;
        for(int i = n1; i <= n2; i++) {
            sum += i;
        }
        cout << "Sum = " << sum << "\n";
        cout << "Again(Y/N)?? ";
        cin >> again;
    } while(again == 'Y' || again == 'y');
    

    cout << "\n==========================================\n\n";
    
    int N;
    cout << "Please input a number: ";
    cin >> N;
    vector<pair<int, int>> twinPrimes;
    for(int i2 = 2; i2 <= N - 2; i2++) {
        if(isPrime(i2) && isPrime(i2 + 2)) {
            twinPrimes.push_back({i2, i2 + 2});
        }
    }
    for(auto &p : twinPrimes) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << "\nTotal is " << twinPrimes.size() << "\n";

    cout << "\n==========================================\n\n";

    return 0;
}

