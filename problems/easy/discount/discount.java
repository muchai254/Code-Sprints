package problems.easy.discount;

public class discount {
    public static double get_discount(float p,float d){

        // write you code here
        double finalPrice = p - (p * d/100);
        return finalPrice;
    }
}
public static void main(String[] args){
    System.out.println(get_discount(1500,50));
}
