#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int computer_move(int sum) {
    // 電腦的策略是讓總和保持在4的倍數
    int move = (4 - (sum % 4)) % 4;
    if (move == 0) {
        move = rand() % 3 + 1;
    }
    return move;
}

int player_move() {
    int move;
    while (true) {
        cout << "你要加多少 (1-3)？";
        cin >> move;
        if (move >= 1 && move <= 3) {
            return move;
        } else {
            cout << "請輸入1到3之間的數字。" << endl;
        }
    }
}

int main() {
    srand(static_cast<unsigned>(time(0))); // 初始化隨機種子
    int N = rand() % 31 + 10; // 產生10到40之間的隨機數
    cout << "遊戲開始！目標數字是 " << N << endl;
    int sum = 0;

    while (sum < N) {
        // 電腦的回合
        int comp_move = computer_move(sum);
        sum += comp_move;
        cout << "電腦加了 " << comp_move << "，總和是 " << sum << endl;
        if (sum >= N) {
            cout << "你贏了！" << endl;
            break;
        }

        // 玩家回合
        int player_move_value = player_move();
        sum += player_move_value;
        cout << "你加了 " << player_move_value << "，總和是 " << sum << endl;
        if (sum >= N) {
            cout << "你輸了！" << endl;
            break;
        }
    }

    return 0;
}
