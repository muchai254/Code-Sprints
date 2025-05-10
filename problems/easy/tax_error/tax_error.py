def calculate_tax(income):
    if income <= 0:
        return 0
    else:
        tax_rate = 0.15
        tax = income * tax_rate  
    return tax

print(calculate_tax(10000)) 
