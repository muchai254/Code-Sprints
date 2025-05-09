const getdiscountedP = require("../discount");

function test() {
    if (getDiscount(89, 20)!= 71.2) {
        console.error("❌ failed js test");
    }
    else{
        console.log("✅ passed");
    }
}