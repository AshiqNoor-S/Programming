import java.util.Scanner; 
public class vote {
    public static void main(String[] args){
        Scanner myObj = new Scanner(System.in);
        int age = myObj.nextInt();
        if (age>18){
            System.out.println("Eligible to vote");
        }else{
            System.out.println("Not eligible to vote");
        }
    }
}