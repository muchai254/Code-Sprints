def is_Disarium(num):
    digits = str(num)
    total = sum(int(digit) ** (index + 1) for index, digit in enumerate(digits))
    return total == num
