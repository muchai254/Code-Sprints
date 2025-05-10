package problems.intermediate.secret_agent.__tests__;

import problems.intermediate.secret_agent.secret_agent;

import java.util.*;

public class secret_agentTest {
    public static void main(String[] args) {
        if (secret_agent.crackCode("58")!= List.of('5','7','8','9','0')) {
            throw new AssertionError("❌ Failed java test 1");
        }
        if (secret_agent.crackCode("0") != List.of('0', '8')) {
            throw new AssertionError("❌ Failed java test 2");
        }
        System.out.println("✅ Java test passed!");
    }
     
}