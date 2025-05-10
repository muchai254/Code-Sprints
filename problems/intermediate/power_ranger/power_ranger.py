def getPowerRange(n, a, b):
    count = 0
    x = 1

    while True:
        power = x ** n
        if power > b:
            break
        if power >= a:
            count += 1
        x += 1

    return count


print(getPowerRange(2, 49, 65))  
print(getPowerRange(3, 1, 27))     
print(getPowerRange(10, 1, 5))     
print(getPowerRange(5, 31, 33))    
print(getPowerRange(4, 250, 1300)) 
