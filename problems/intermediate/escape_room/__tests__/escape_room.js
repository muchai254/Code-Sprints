const is_d_fx = require("../escape_room")

function test() {
    if (!is_Disarium(135)) {
        console.error("❌ failed js test 1");
    }
    if (is_Disarium(234)) {
        throw console.error("❌ failed js test2");
        
    }
    else{
        console.log("✅ passed js tests");
    }
}