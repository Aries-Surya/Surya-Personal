// INDEX.html
// <form action="servlet1">
// Name:<input type="text" name="userName"/><br/>
// <input type="submit" value="go"/>
// </form>

// Firstservlet.java
// import java.io.*;
// import javax.servlet.*;
// import javax.servlet.http.*;
// public class FirstServlet extends HttpServlet {
// public void doGet(HttpServletRequest request, HttpServletResponse response){
// try{
// response.setContentType("text/html");
// PrintWriter out = response.getWriter();
// string n=request.getParameter("userName");
// out.print("Welcome "+n);
// //creating form that have invisible textfield
// out.print("<form action='servlet2'>");
// out.print("<input type='hidden' name='uname' value='"+n+"'>");
// out.print("<input type='submit' value='go'>");
// out.print("</form>");
// out.close();
// }catch(Exception e){System.out.println(e);}
// }
// }

// SecondServlet.java
// import java.io.*;
// import javax.servlet.*;
// import javax.servlet.http.*;
// public class SecondServlet extends HttpServlet {
// public void doGet(HttpServletRequest request, HttpServletResponse response)
// try{
// response.setContentType("text/html");
// PrintWriter out = response.getWriter();
// //Getting the value from the hidden field
// String n=request.getParameter("uname");
// out.print("Hello "+n);
// out.close();
// }catch(Exception e){System.out.println(e);}
// }
// }

// Web.xml
// <web-app>
// <servlet>
// <servlet-name>s1</servlet-name>
// <servlet-class>FirstServlet</servlet-class>
// </servlet>
// <servlet-mapping>
// <servlet-name>s1</servlet-name>
// <url-pattern>/servlet1</url-pattern>
// </servlet-mapping>
// <servlet>
// <servlet-name>s2</servlet-name>
// <servlet-class>SecondServlet</servlet-class>
// </servlet>
// <servlet-mapping>
// <servlet-name>s2</servlet-name>
// <url-pattern>/servlet2</url-pattern>
// </servlet-mapping>
// </web-app>