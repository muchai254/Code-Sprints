import crackCode from "../secret agent";

const crakCode = required("../secret agent");

function tests() {
    if (crackCode("11")!=["11", "22", "44", "12", "21", "14", "41", "24", "42"]) {
        console.error("❌ failed js test 1");
    }
    if (crackCode("2")!=['1', '2', '3', '5']) {
        console.error("❌ failed js test 1");
    }else{
        console.log("✅ passed js tests");
    }
}

tests();