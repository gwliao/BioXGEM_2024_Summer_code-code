def int_to_roman(num):
    val = [
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4,
        1
        ]
    syb = [
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV",
        "I"
        ]
    roman_num = ''
    i = 0
    while num > 0:
        for _ in range(num // val[i]):
            roman_num += syb[i]
            num -= val[i]
        i += 1
    return roman_num

def main():
    while True:
        try:
            num = int(input("請輸入介於 1~3999 之間的阿拉伯數字: "))
            if 1 <= num <= 3999:
                print(f"轉成羅馬數字為: {int_to_roman(num)}")
                break
            else:
                print("請輸入1到3999之間的數字。")
        except ValueError:
            print("請輸入有效的數字。")

if __name__ == "__main__":
    main()
