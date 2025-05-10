def calculate_tax(income):
    # Handle invalid inputs
    if not isinstance(income, (int, float)):
        return 0

    # Handle zero or negative income
    if income <= 0:
        return 0
    else:
        tax_rate = 0.15
        tax = income * tax_rate
        return tax
