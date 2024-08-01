import random

digits = list(range(10))
random.shuffle(digits)
number = ''.join(str(digit) for digit in digits[:4])

print(f"The answer is: {number}")

attempts = 0

while True:
    attempts += 1
    user_input = input("Please input four digits (0~9): ")
    a = sum([number[i] == user_input[i] for i in range(4)])
    b = len(set(number) & set(user_input)) - a
    if a == 4:
        print(f"You got it!! You guessed {attempts} times!!")
        break
    else:
        print(f"The result is {a}A {b}B")
