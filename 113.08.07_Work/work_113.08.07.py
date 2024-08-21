def count_find(all_string, re_string):
    count = all_string.count(re_string)
    if count > 0:
        print(f"'{re_string}' is a substring of '{all_string}'")
        print(f"Repeat {count} times")
        print("----------------------------------")
    else:
        print(f"'{re_string}' is not a substring of '{all_string}'")
        print("----------------------------------")

while True:
    all_string = input("Please input the string 1 : ")
    re_string = input("Please input the string 2 : ")

    count_find (all_string, re_string)

