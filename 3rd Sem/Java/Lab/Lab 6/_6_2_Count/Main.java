import java.sql.*;
public class Main {
    public static void main(String[] args) throws Exception {
        String user = "ODBC";
        String pw = "";
        String url = "jdbc:mysql://localhost:3306/javalab";
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection cn = DriverManager.getConnection(url, user, pw);
            Statement st = cn.createStatement();
            String q = "select count(roll) from students";
            ResultSet rs = st.executeQuery(q);
            while (rs.next()){
                System.out.println("Number: " + rs.getInt(1));

            }
            cn.close();
        }catch (Exception e){
            System.out.println(e.getMessage());
        }
    }
}