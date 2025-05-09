const passwordLeakFx = require("../password_Leak")

function testPassword() {
    if (password_Leak_fx("cbaebabacd", "abc")!= [0,6]) {
        throw new Error("❌ Test failed");
    }else{
        console.log("✅ All JavaScript tests passed!");
    }
}

testPassword();