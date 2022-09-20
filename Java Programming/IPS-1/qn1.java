import java.util.*;
public class qn1{
    public static void main(String args[]){
    Scanner obj = new Scanner(System.in);
    int a = obj.nextInt();
    int b = obj.nextInt();
    int c = obj.nextInt();
    int d = a+b+c;
    int e = (a/2)+(b/2)+(c/2);
    char ch = (char) b;
    System.out.println(Integer.toString(a) + Integer.toString(b) + Integer.toString(c));
    System.out.println(Math.round(Math.sqrt(d)*100)/100.0);
    System.out.println((int)e);
    System.out.println(Math.round(((a%5)+(b%5)+(c%5))/3.0*100)/100.0);
    System.out.println(Math.round(Math.cos(a) * Math.sin(c) * 100)/100.0);
    System.out.println(ch);
    }
}