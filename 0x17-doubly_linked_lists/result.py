#!/usr/bin/python3
def is_palindrome(nu):
    return str(num) == str(num)[::-1]
largest_palindrome = 0
for i in range(100, 1000):
    for j in range(i, 1000):
        product = i*j
        if is_palindrome(product) and product > largest_palindrome and 99 < i < 1000 and 99 < j < 1000:
            largest_palindrome = product with open('102-result','w') as file:
                file.write(str(largest_palindrome))
                print(largest_palindrome)
