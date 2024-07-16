#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "i = " << i << endl;
    }
    



     int i1 = 0;
    do {
        cout << "i1 = " << i1 << endl;
        i1++;
    } while (i1 < 5);



    for (int i2 = 0; i2 < 10; i2++) {
        if (i2 == 5) {
            break; // 當 i 等於 5 時，退出迴圈
        }
        cout << "i2 = " << i2 << endl;
    }

    for (int i3 = 0; i3 < 10; i3++) {
        if (i3 == 5) {
            continue; // 當 i3 等於 5 時，跳過本次迴圈，進入下一次迭代
        }
        cout << "i3 = " << i3 << endl;
    }



    return 0;
}
