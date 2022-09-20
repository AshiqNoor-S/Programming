import java.util.*;
public class qn3{
    public static void main(String args[]){
        Scanner obj = new Scanner(System.in);
        double d = obj.nextFloat();
        double p = obj.nextFloat();
        double a = 3.14*(d/2)*(d/2);
        System.out.println(Math.round(100*p/a)/100.0);    
    }
}
