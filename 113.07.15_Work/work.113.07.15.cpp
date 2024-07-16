#include<iostream>
#include<vector>
#include<limits>
#include<iomanip>
using namespace std;

int main(){

    cout << "Please output the multiplication table as shown in the image below \n";
    
    for(int i = 1; i < 10; i++ ){
        for (int k = 1; k < 10; k++){
        
        cout << i << "*" << k << "=" << i*k << "\0" ;
        
        if (k == 9){
                cout << "\n" ;
            }else {
                cout << "\t";
            }          

        }
    }

    printf("\n======================================================\n");
    cout << "Please input a series of integers, each ranging from 0 to 99.\n Calculate the average of these integers and determine the maximum and minimum values among them.";
    int n1;
    cout << "Please input a number: ";
    cin >> n1;

    vector<int> numbers(n1);
    int sum = 0;
    int max = numeric_limits<int>::min();
    int min = numeric_limits<int>::max();

    for (int i1 = 0; i1 < n1; ++i1) {
        cout << "Integer #" << i1 + 1 << ": ";
        cin >> numbers[i1];
        sum += numbers[i1];
        if (numbers[i1] > max) max = numbers[i1];
        if (numbers[i1] < min) min = numbers[i1];
    }

    double average = static_cast<double>(sum) / n1;

    cout << "The average is " << average << endl;
    cout << "The maximum is " << max << endl;
    cout << "The minimum is " << min << endl;


    printf("\n======================================================\n");
    int n;
    cout << "\nPlease input the number of integers: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {              // 計算並印出每一行的空白部分
            cout << setw(n-i+1);                // 印出重複的數字
        for (int j = 0; j < 2*i-1; j++) {
            cout << i%10;
        }                                       // 換行到下一層
        cout << endl;
    }



 return 0;
}
    
   
    
