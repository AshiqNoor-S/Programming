import java.util.*;
public class qn2{
    public static void main(String args[]){
        Scanner obj = new Scanner(System.in);
        double f = obj.nextFloat();
        double t = Math.round((f-32)*5.0/9.0*100)/100.0;
        System.out.println("Fahrenheit: "+f);
        System.out.println("Celsius: "+t);
    }
}

