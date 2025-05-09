
import gridCleaner from "../Grid_Cleaner"

function test() {
    if (gridCleaner([[0]],0,0,1,0) != [0,0]) {
        throw new Error(`❌ Test failed}`);
    }
    console.log("✅ JavaScript test passed!");
}