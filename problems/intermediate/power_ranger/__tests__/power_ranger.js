const powerRanger = require("../power_ranger")

function test() {
    if (powerRanger.getPowerRange(3, 1, 27)!=3) {
        throw console.error("❌ failed js test 1");
        
    }
    if (powerRanger.getPowerRange(2, 1, 100)!=10) {
        throw console.error("❌ failed js test 2");
    }
    else{
        console.log("✅ passed all js tests congrats");
    }
}

test();