const count_savings = require("../savings");

let  testnum = [111,175,999,1,925];
let expected = [6216,15400,499500,1,428275];
for (let index = 0; index < testnum.length; index++) {
    if (count_savings(testnum[index])!=expected[index]) {
        throw new Error(`❌ Test failed. Expected YES, got ${result}`);
        break;
    }
    
}

console.log("✅ JavaScript test passed!");