import java.util.Scanner; 
public class electricity {
    public static void main(String[] args){
        Scanner myObj = new Scanner(System.in);
        String name = myObj.nextLine();
        int amt = myObj.nextInt();
        if(amt<=100){
            System.out.println("No charges");
        }else if(amt>100 && amt<200){
            System.out.println(3.25*amt);
        }else if(amt>100 && amt<=200){
            System.out.println(4.50*amt);
        }else if(amt>200 && amt<300){
            System.out.println(5.20*amt);
        }else if(amt>400){
            System.out.println(6.10*amt);
        }
    }
}
