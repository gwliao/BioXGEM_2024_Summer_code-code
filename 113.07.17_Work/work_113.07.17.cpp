#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for(int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void prime(int n) {
    for (int i = 2; n > 1; i++) {
        while (n % i == 0) {
            cout << i;
            n /= i;
            if (n != 1) cout << " * ";
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "\nWrite a function to determine if a given positive integer is a prime number. \nIn mathematics, a prime number is defined as a number greater than 1 \nthat has no positive divisors other than 1 and itself.\n\n";
    cout << "Please enter a positive integer: ";
    cin >> num;
    if(isPrime(num))
        cout << "It is a prime number.\n" << endl;
    else
        cout << "It is not a prime number.\n" << endl;
    

    cout << "\n==============================================";
    cout << "\nWrite a function that takes two positive integers as input and uses the Euclidean \nalgorithm to calculate and return their greatest common divisor (GCD).\n\n";

    int num1, num2;
    cout << "Please input two intergers: ";
    cin >> num1 >> num2;
    cout << "GCD is " << gcd(num1, num2) << endl;
        
    cout << "\n==============================================";
    cout << "\nEnter a positive integer N and performs prime factorization of that number. (N>1)\n\n";

    int num3;
    cin >> num3;
    cout << num3 << " = ";
    prime(num3);
    return 0;
    



}
