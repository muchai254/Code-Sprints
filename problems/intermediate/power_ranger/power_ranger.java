package problems.intermediate.power_ranger;

public class power_ranger {
    public static int getPowerRange(int n, int a, int b) {
        int count = 0;
        int x = 1;

        while (true) {
            double power = Math.pow(x, n);
            if (power > b) {
                break;
            }
            if (power >= a) {
                count++;
            }
            x++;
        }
        return count;
    }

    public static void main(String[] args) {
        System.out.println(getPowerRange(2, 49, 65));
        System.out.println(getPowerRange(3, 1, 27));
        System.out.println(getPowerRange(10, 1, 5)); 
        System.out.println(getPowerRange(5, 31, 33));
        System.out.println(getPowerRange(4, 250, 1300)); 
    }
}
