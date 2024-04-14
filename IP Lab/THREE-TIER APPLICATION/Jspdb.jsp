<%@page import="java.io.*" import="java.sql.*" import="javax.servlet.*" import="javax.servlet.http.*"
    import="java.util.*" %>
    <%@page language="java" %>
        <% String Seat_no,Name; String ans1,ans2,ans3,ans4,ans5; int a1,a2,a3,a4,a5; Connection connect=null; Statement
            stmt=null; ResultSet rs=null; try { Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
            connect=DriverManager.getConnection("jdbc:odbc:jspdsn"); } catch(ClassNotFoundException e) {
            e.printStackTrace(); } catch(SQLException e) { e.printStackTrace(); } catch(Exception e) {
            e.printStackTrace(); } Seat_no=request.getParameter("Seat_no"); Name=request.getParameter("Name");
            ans1=request.getParameter("group1"); if(ans1.equals("True")) a1=2; else a1=0;
            ans2=request.getParameter("group2"); if(ans2.equals("True")) a2=0; else a2=2;
            ans3=request.getParameter("group3"); if(ans3.equals("True")) a3=0; else a3=2;
            ans4=request.getParameter("group4"); if(ans4.equals("True")) a4=2; else a4=0;
            ans5=request.getParameter("group5"); if(ans5.equals("True")) a5=0; else a5=2; int Total=a1+a2+a3+a4+a5;
            out.println(Seat_no); out.println(Name); out.println(Total); try { stmt=connect.createStatement(); String
            query="INSERT INTO marks(seatno,name,marks) VALUES(' " +Seat_no+" ',' "+Name+" ',' "+Total+ " ')";
int result=stmt.executeUpdate(query);
connect.commit();
stmt.close();
}
catch(SQLException e)
{
System.out.println("Error"+e);
}
%>
<html>
<head>
</head>
<body bgcolor="green" text="red">
<center>
<br><br>
<h2>Student Database </h2>
<table border=5>
<%
try
{
stmt=connect.createStatement();
String query="SELECT * FROM marks";
rs=stmt.executeQuery(query);
%>
<th><% out.println("Seat_no");%> </th>
<th><% out.println("Name");%></th>
<th><% out.println("Marks");%></th>
<%
while(rs.next())
{
%>
<tr>
<td><%=rs.getInt(1)%></td>
<td><%=rs.getString(2)%></td>
<td><%=rs.getInt(3)%></td>
</tr>
<%} %>
</table>
<%
}catch(SQLException e)
{}
finally
{
try
{
if(rs!=null)
rs.close();
if(stmt!=null)
stmt.close();
if(connect!=null)
connect.close();
}
catch(SQLException e)
{}
}
%> <center><h1>Thanks!</h1></center></body></html>