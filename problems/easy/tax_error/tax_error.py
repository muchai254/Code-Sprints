def calculate_tax(income):
    if income < 0:
        return "Income can't be negative" 
    tax_rate = 0.15
    tax = 0
    return income * tax_rate  
    

print(calculate_tax(10000)) 
