//EX-01 APPLICATION USING CLASSES AND OBJECTS
import java.io.*; 
import java.util.Scanner;
public class EX1_EBbillCalculation
{
    int cno;
    String cname;
    int pm_reading,cm_reading,units;
    double billpay;
    void getdetails()
    {
        Scanner in = new Scanner(System.in); 
        System.out.println("Enter the Consumer No:");
        cno=in.nextInt();
        System.out.println("Enter the Consumer Name:"); 
        cname=in.next();
        System.out.println("Enter the Previous Month Reading:"); 
        pm_reading=in.nextInt();
        System.out.println("Enter the Current Month Reading:"); 
        cm_reading=in.nextInt();
        units= cm_reading-pm_reading; 
        System.out.println("Choose the type of EB Connection 1.Domestic connection 2. Commercial connection"); 
        int ch=in.nextInt();
        switch(ch)
        {
            case 1:
                Domestic_Calculation(units); 
                break;
            case 2:	
                Commercial_Calculation(units); 
                break;
        }
    }
    void Domestic_Calculation(int units)
    {
        billpay = 0; 
        if(units<=100)
            billpay=units*1.00;
        else if(units>100 && units<=200)
        {
            billpay=100*1.00+(units-100)*2.50;
        }
        else if(units>200 && units<=500)
        {
            billpay=100*1.00+200*2.50+(units-200)*4.00;
        }
        else if(units>500)
        {
            billpay =100*1.00+200*2.50+500*4.00+(units-500)*6.00;
        }
        show();
        System.out.println("Amount to be Paid : " + billpay);
    }
    void  Commercial_Calculation(int  units)
    {
        billpay = 0; if(units<=100)
        {
            billpay=units*2.00;
        }
        else if(units>100 && units<=200)
        {
            billpay=100*2.00+(units-100)*4.50;
        }
        else if(units>200 && units<=500)
        {
            billpay=100*2.00+200*4.50+(units-200)*6.00;
        }
        else if(units>500)
        {
            billpay =100*2.00+200*4.50+500*6.00+(units-500)*7.00;
        }
        show();
        System.out.println("Amount to be Paid : " + billpay);
    }
    public void show()
    {
        System.out.println("Customer Number : " + cno); 
        System.out.println("Customer Name : " + cname); 
        System.out.println("Units Consumed : " + units);
    }
    public static void main(String[] args)
    {
        EX1_EBbillCalculation eb=new EX1_EBbillCalculation(); 
        eb.getdetails();
    }
}
