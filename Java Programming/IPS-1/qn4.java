import java.util.*;
public class qn4{
    public static void main(String args[]){
        Scanner obj = new Scanner(System.in);
        double f = obj.nextFloat();
        double m = obj.nextFloat();
        double a = f/m;
        System.out.println(Math.round((a*100))/100.0);
    }
}
