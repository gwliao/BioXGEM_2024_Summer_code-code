#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int number;

    cout << "When the input integer is not a positive integer\n";
    cout << "Please input a positive integer:";
    cin >> number;
        
    if (number < 0) {
        cout << number <<  " is not a positive integer!!" << endl;
    } else if (number == 0) {
        cout << number << " is not a positive integer!!" << endl;
    } else {
        cout << number << " is a positive integer!!" << endl;
    }

    cout << "When the input integer is between 1 and 9\n";
    int number1;
    cout << "Please input a positive integer:";
    cin >> number1;
        
    if (number1 < 10) {
        cout << number1 <<  " is a small integer." << endl;
    } else if (number1 > 0) {
        cout << number1 << " is not a positive integer!!" << endl;
    } else {
        cout << number1 << " is a big integer." << endl;
    }


    cout << "When the input integer is between 10 and 99\n";
    int number2;
    int ans2_1;
    int ans2_2;

    cout << "Please input a tens digits positive integer:";
    cin >> number2;

    ans2_1 = number2 / 10;
    ans2_2 = number2 % 10;

    cout << "The tens digit of "<< number2 <<" is "<< ans2_1 << endl;
    cout << "The units digit of "<< number2 <<" is "<< ans2_2 << endl;
        

    cout << "When the input integer is greater than or equal to 100 and is a multiple of 5\n";
    int number3;
    int ans3_1;
    int ans3_2;

    cout << "Please input a positive integer:";
    cin >> number3;

    if (number3 < 10) {
        cout << number3 <<  " is a small integer." << endl;
    } else if (number3 > 100) {
        cout << number3 << " is a large integer" << endl;
    } else if (0 < number3 < 100) {
        cout << number3 << " is a positive integer" << endl;
    } else {
        cout << number3 << " is not a positive integer!!" << endl;
    }

    ans3_1 = number3 / 5;
    ans3_2 = number3 % 5;
            
    if (ans3_2 = 0) {
        cout << number3 << " is divisible by 5." << endl;
     } else if (number3 = 5) {
        cout << number3 << " is divisible by 5." << endl;
    } else {
        cout << number3 << " is not divisible by 5." << endl;
    }

    cout << "When the input integer is greater than or equal to 100 and the remainder when divided by 5 is 1\n";
    int number4;
    int ans4_1;
    int ans4_2;

    cout << "Please input a positive integer:";
    cin >> number4;

    if (number4 < 10) {
        cout << number4 <<  " is a small integer." << endl;
    } else if (number4 > 100) {
        cout << number4 << " is a large integer." << endl;
    } else if (0 < number4 < 100) {
        cout << number4 << " is a positive integer" << endl;
    } else {
        cout << number4 << " is not a positive integer!!" << endl;
    }

    ans4_1 = number4 / 5;
    ans4_2 = number4 % 5;
            
    if (ans4_2 = 1) {
        cout << number4 << " + 5 = " << number4 + 5 << " is divisible by 5." << endl;
        } else {
        cout << number4 << " is not  divided by 5 is 1." << endl;
    }

    cout << "When the input integer is greater than or equal to 100 and the remainder when divided by 5 is 2\n";
    int number5;
    int ans5_1;
    int ans5_2;

    cout << "Please input a positive integer:";
    cin >> number5;

    if (number5 < 10) {
        cout << number5 <<  " is a small integer." << endl;
    } else if (number5 > 100) {
        cout << number5 << " is a large integer." << endl;
    } else if (0 < number5 < 100) {
        cout << number5 << " is a positive integer" << endl;
    } else {
        cout << number5 << " is not a positive integer!!" << endl;
    }

    ans5_1 = number5 / 5;
    ans5_2 = number5 % 5;
            
    if (ans5_2 = 2) {
        cout << number5 << " - 5 = " << number5 - 5 << endl;
        } else {
        cout << number5 << " is not  divided by 5 is 2." << endl;
    }

    cout << "When the input integer is greater than or equal to 100 and the remainder when divided by 5 is 3\n";
    int number6;
    int ans6_1;
    int ans6_2;

    cout << "Please input a positive integer:";
    cin >> number6;

    if (number6 < 10) {
        cout << number6 <<  " is a small integer." << endl;
    } else if (number6 > 100) {
        cout << number6 << " is a large integer." << endl;
    } else if (0 < number6 < 100) {
        cout << number6 << " is a positive integer" << endl;
    } else {
        cout << number6 << " is not a positive integer!!" << endl;
    }

    ans6_1 = number6 / 5;
    ans6_2 = number6 % 5;
            
    if (ans6_2 = 3) {
        cout << number6 << " * 5 = " << number6 * 5 << endl;
        } else {
        cout << number6 << " is not divided by 5 is 3." << endl;
    }

    cout << "When the input integer is greater than or equal to 100 and the remainder when divided by 5 is 4 (show up to two decimal places)\n";
    int number7;
    float ans7_1;
    int ans7_2;

    cout << "Please input a positive integer:";
    cin >> number7;

    if (number7 < 10) {
        cout << number7 <<  " is a small integer." << endl;
    } else if (number7 > 100) {
        cout << number7 << " is a large integer." << endl;
    } else if (0 < number7 < 100) {
        cout << number7 << " is a positive integer" << endl;
    } else {
        cout << number7 << " is not a positive integer!!" << endl;
    }

    ans7_1 = number7 / 5;
    ans7_2 = number7 % 5;
            
    if (ans7_2 = 4) {
        cout << number7 << " / 5 = " << fixed << setprecision(2) << ans7_1 << endl;
        cout << fixed << setprecision(2) << ans7_1 << endl;

        } else {
        cout << number7 << " is not  divided by 5 is 4." << endl;
    }

    return 0;
}