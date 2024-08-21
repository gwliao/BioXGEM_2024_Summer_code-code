import random

def computer_move(sum):
    # 電腦的策略是讓總和保持在4的倍數
    move = (4 - (sum % 4)) % 4
    if move == 0:
        move = random.randint(1, 3)
    return move

def player_move():
    while True:
        try:
            move = int(input("你要加多少 (1-3)？"))
            if 1 <= move <= 3:
                return move
            else:
                print("請輸入1到3之間的數字。")
        except ValueError:
            print("請輸入有效的數字。")

def main():
    N = random.randint(10, 40)
    print(f"遊戲開始！目標數字是 {N}")
    sum = 0

    while sum < N:
        # 電腦的回合
        comp_move = computer_move(sum)
        sum += comp_move
        print(f"電腦加了 {comp_move}，總和是 {sum}")
        if sum >= N:
            print("你贏了！")
            break

        # 玩家回合
        player_move_value = player_move()
        sum += player_move_value
        print(f"你加了 {player_move_value}，總和是 {sum}")
        if sum >= N:
            print("你輸了！")
            break

if __name__ == "__main__":
    main()
