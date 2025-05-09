import {calculateTax} from "../tax_error"

const tests = [10000,0,-500];
const expected = [1500,0,0];
for (let index = 0; index < 3; index++) {
    if (calculateTax(tests[index]) != expected[index]) {
        throw new Error("❌ Test failed.");
    }
    
}
console.log("✅ JavaScript test passed!");
