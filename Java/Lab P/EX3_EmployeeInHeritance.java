//EX-03 APPLICATION USING INHERITANCE
import java.io.IOException; 
import java.util.Scanner;
class Emp
{
    String ename,Address,email; 
    int eid;
    String mobile;
    void getEmployeedetails()
    {
        Scanner in = new Scanner(System.in); 
        System.out.println("Enter the Emp_id. :");
        eid=in.nextInt();
        System.out.println("Enter the Employee Name:"); 
        ename=in.next();
        System.out.println("Enter the Employee Address:"); 
        Address=in.next();
        System.out.println("Enter the Employee Email id :"); 
        email=in.next();
        System.out.println("Enter the Mobile No:"); 
        mobile=in.next();
    }
    void pay_calulation(double BasicPay)
    {
        double DA,HRA,PF,Sfund,Gross_Salary,Netsalary; 
        DA=BasicPay*0.97;
        HRA=BasicPay*0.10; 
        PF=BasicPay*0.12; 
        Sfund=BasicPay*0.1; 
        Gross_Salary=BasicPay+DA+HRA; 
        Netsalary=Gross_Salary-(PF+Sfund);
        System.out.println("Gross salary of the Employee"+Gross_Salary); 
        System.out.println("Net salary of the Employee: "+Netsalary);
    }
    void display()
    {
        System.out.println("Emp_id:"+eid); 
        System.out.println("Employee Name:"+ename); 
        System.out.println("Employee Address:"+Address); 
        System.out.println("Employee Email id :"+email); 
        System.out.println("Employee Mobile No:"+mobile);
    }
}
class Programmer extends Emp
{
    double BasicPay;
    void Programmerdetails()
    {
        getEmployeedetails();
        Scanner in = new Scanner(System.in); 
        System.out.println("Enter the Basic Pay of the Programmer:");
        BasicPay=in.nextInt(); 
        display(); 
        pay_calulation(BasicPay);
    }
}
class AssistantProfessor extends Emp
{
    void APDetails()
    {
        double BasicPay; 
        getEmployeedetails();
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the Basic Pay of the AssistantProfessor:"); 
        BasicPay=in.nextInt();
        display(); 
        pay_calulation(BasicPay);
    }
}
class AssociateProfessor extends Emp
{
    double BasicPay;
    void ASPDetails()
    {
        getEmployeedetails();
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the Basic Pay of the AssociateProfessor:"); 
        BasicPay=in.nextInt();
        display(); 
        pay_calulation(BasicPay);
    }

}
class Professor extends Emp
{
    double BasicPay; 
    void profDetails()
    {
        getEmployeedetails();
        Scanner in = new Scanner(System.in); 
        System.out.println("Enter the Basic Pay of the Professor:"); 
        BasicPay=in.nextInt();
        display(); 
        pay_calulation(BasicPay);
    }
}

public class EX3_EmployeeInHeritance
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in); 
        System.out.println("Choose the type Employee");
        System.out.println("1.Programmer ,2.Assistant Professor,3.Associate Professor,4.Professor: ");
        int ch=in.nextInt(); 
        switch(ch)
        {
            case 1:		
            System.out.println("PROGRAMMER DETAILS"); 
            Programmer p=new Programmer();
            p.Programmerdetails(); 
            break;
            case 2: 
            System.out.println("Assistant Professor DETAILS"); 
            AssistantProfessor ap=new AssistantProfessor();
            ap.APDetails(); 
            break;
            case 3: 
            System.out.println("Associate Professor DETAILS"); 
            AssociateProfessor asp=new AssociateProfessor();
            asp.ASPDetails(); 
            break;
            case 4: 
            System.out.println("Professor DETAILS"); 
            Professor pf=new Professor();
            pf.profDetails(); 
            break;
        }
    }
}
 
