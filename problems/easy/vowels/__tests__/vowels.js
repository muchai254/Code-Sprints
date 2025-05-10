
const getvowels = require("../vowels");

let testWords = [
    "campus",
    "drum",
    "callender"
]
let expected = [
    2,\
    1,
    3
]

for (let index = 0; index < testWords.length; index++) {
    if (getvowels(testWords[index])!= expected[index]) {
        throw new Error("❌ Test failed.");
    }
}
console.log("✅ JavaScript test passed!");