def are_anagrams(str1, str2):

    str1 = str1.replace(" ", "").lower()
    str2 = str2.replace(" ", "").lower()
    
    return sorted(f'{str1}') == sorted(f'{str2}')


while True:
    string1 = input("Please input the string 1 : ")
    string2 = input("Please input the string 2 : ")
    print(are_anagrams(string1, string2))

# for a, b in enumerate ([str1, str2])


