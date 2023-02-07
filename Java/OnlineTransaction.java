import java.util.Scanner;
abstract class Payment{
    protected int amount;
    protected Scanner sc = new Scanner(System.in);
    protected void getAmount(){
        System.out.println("Enter the amount: ");
        amount = sc.nextInt();
        message();
    }
    protected void message(){
        if(getCredentials() == 1)System.out.println("Transaction Successfull");
        else System.out.println("Transaction failed");
    }
    public void makeTransaction(){
        getAmount();
    }
    abstract int getCredentials();
}

class CardPayment extends Payment{
    private int amount;
    private String cardNumber;

    public int getCredentials(){
        System.out.println("Enter card Number: ");
        cardNumber = sc.next(); 
        return 1;
    }
}

class NetBanking extends Payment{
    private int amount;
    private String accNo, ifsc, password;

    public int getCredentials(){
        System.out.println("Enter account Number: ");
        accNo = sc.next(); 
        System.out.println("Enter IFSC code: ");
        ifsc = sc.next();
        System.out.println("Enter transaction password");
        password = sc.next();
        return 1;
    }


}

public class OnlineTransaction {
    public static void main(String[] args) {
        Payment cardPayment = new CardPayment();
    Payment netPayment = new NetBanking();
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the choice: \n1.Net Banking\n2.Card Payment: ");
    switch (sc.nextInt()) {
        case 1:
            netPayment.makeTransaction();
            break;
        case 2:
            cardPayment.makeTransaction();
            break;
        default:
            System.out.println("Invalid choice");
            break;
    }
    }
}
