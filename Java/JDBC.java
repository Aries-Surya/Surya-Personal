import java.sql.*; 
class JDBC
{
    public static void main(String args[])
    {
        try
        { 
            Class.forName("com.mysql.jdbc.Driver"); //registering with driver
            Connection con=DriverManager.getConnection( "jdbc:mysql://localhost:3306/st","root","root"); //connecting with mysql server
            PreparedStatement stmt;// to execute the SQL statements repeatedly
            stmt=con.createStatement(); // sending SQL statements to the database
            ResultSet rs;// refers to the row and column data of table
            int ch,no;
            Scanner s=new Scanner(System.in);
            do
            {
                System.out.println("1.Insert 2.Update  3.Delete 4.Display 5.Exit");
                System.out.println("Enter the choice");
                ch=s.nextInt();
                switch(ch)
                {
                    case 1:
                    stmt=con.prepareStatement("insert into student values(101,"John","Chennai")"); 
                    int i =stmt.executeUpdate(); 
                    System.out.println(i+" records inserted");
                    case 2:
                    stmt=con.prepareStatement("update emp set name="James" where id=101");
                    int i=stmt.executeUpdate(); 
                    System.out.println(i+" records updated");
                    case 3:
                    PreparedStatement stmt=con.prepareStatement("delete from student where id=102"); 
                    int i=stmt.executeUpdate(); 
                    System.out.println(i+" records deleted");
                    case 4:
                    rs=stmt.executeQuery("select * from student"); 
                    while(rs.next())
                    System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getString(3));
                    case 5:
                    break;
                }
                System.out.println("Enter 0 to exit and 1 to continue");
                no=s.nextInt();
            }while(no==1);
            con.close();
        }
        catch(Exception e)
        {
            System.out.println("Error");
        }
    }
}
