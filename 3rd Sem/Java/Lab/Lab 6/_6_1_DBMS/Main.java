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
            String q = "select * from students";
            ResultSet rs = st.executeQuery(q);
            while (rs.next()){
                System.out.println("Roll: "+ rs.getInt(1)+ " Name: "+rs.getString(2)+ " Faculty: "+rs.getString(3)+ " Marks: "+ rs.getInt(4));
            }
            cn.close();
        }catch (Exception e){
            System.out.println(e.getMessage());
        }
    }
}