class Studentdata
{
    int RollNO;
    String Stdname;
    static int totalNoStd;
    Studentdata() //Default constructor
    {
        RollNO =100;
        Stdname = "Surya";
    }
    Studentdata(String S) //Parameterized constructor
    {
        RollNO = 101;
        Stdname = S;
    }
    Studentdata(int r) //Parameterized constructor
    {
        RollNO= r;
        Stdname="JSP";
    }
    static void gettotalNoStd()
    {
        totalNoStd++;
        System.out.println("the total count of Students is:"+totalNoStd);
    }
    void display()
    {
        System.out.println("Student Name is:"+Stdname);
        System.out.println("Student rollno is:"+RollNO);
    }
    class Main
    {
        public static void main(String args[]) 
        {
            Studentdata s1=new Studentdata();
            s1.display();
            Studentdata.gettotalNoStd();
            Studentdata s2=new Studentdata(102);
            s2.display();
            Studentdata.gettotalNoStd();
            Studentdata s3=new Studentdata("Prakash");
            s3.display();
            Studentdata.gettotalNoStd();

        }
    }
}