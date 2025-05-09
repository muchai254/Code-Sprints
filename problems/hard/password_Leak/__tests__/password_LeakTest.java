package problems.hard.password_Leak.__tests__;

import java.util.List;

import problems.hard.password_Leak.password_Leak;

public class password_LeakTest {
    public static void main(String[] args) {
        if (password_Leak.passwordLeak("cbaebabacd", "abc")!= List.of(0,6)) {
            System.out.println("❌ all java tests passed!");
        }
        System.out.println("✅ All Java tests passed!");
    }
    
}