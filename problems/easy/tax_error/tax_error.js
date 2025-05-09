function calculateTax(income) {
    if (income < 0) {
      return "Income can't be negative";  
    }
    const taxRate = 0.15;
    let tax = 0;
    income * taxRate;  
    return tax;
  }
  
  console.log(calculateTax(10000));  