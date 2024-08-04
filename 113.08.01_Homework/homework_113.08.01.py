# 字母到數字的對應表
letter_to_num = {chr(i+64): i for i in range(1, 27)}

# 身份證字母對應的數字
letter_mapping = {
    'A': 10, 'B': 11, 'C': 12, 'D': 13, 'E': 14, 'F': 15, 'G': 16, 'H': 17,
    'I': 34, 'J': 18, 'K': 19, 'L': 20, 'M': 21, 'N': 22, 'O': 35, 'P': 23,
    'Q': 24, 'R': 25, 'S': 26, 'T': 27, 'U': 28, 'V': 29, 'W': 32, 'X': 30,
    'Y': 31, 'Z': 33
}

def check_id(id_number):
    # 將字母轉換為對應的數字
    numbers = [letter_mapping[id_number[0]]] + [int(num) for num in id_number[1:]]
    # 計算加權和
    weighted_sum = numbers[0] // 10 + (numbers[0] % 10) * 9 + sum([num * (8 - idx) for idx, num in enumerate(numbers[1:-1])]) + numbers[-1]
    # 檢查碼驗證
    return '身分證字號正確 !!' if weighted_sum % 10 == 0 else '身分證字號錯誤 !!'

# 使用者輸入身份證字號
user_id = input("請輸入身分證字號:")
print(check_id(user_id))
