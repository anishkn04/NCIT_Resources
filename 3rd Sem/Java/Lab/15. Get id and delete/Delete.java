/*
REMEMBER TO ADD JDBC IN BUILD PATH
Create a database and table first!
Copy and paste the following commands in mysql:

.......................
drop database javalab;
CREATE DATABASE IF NOT EXISTS javalab;
USE javalab;
CREATE TABLE IF NOT EXISTS students(
    roll int primary key,
    name varchar(30),
    faculty varchar(10),
    marks float
);
.......................

*/

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import java.util.Scanner;

public class Delete {
    public static void main(String[] args) {
        String name = "root";
        String pwd = "";
        String url = "jdbc:mysql://localhost:3306/javalab";
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection cn = DriverManager.getConnection(url, name, pwd);
            Statement st = cn.createStatement();
            
            Scanner scanner = new Scanner(System.in);
            System.out.print("Enter the id to delete: ");
            int id = scanner.nextInt();
            
            String q = "DELETE FROM students WHERE roll = " + id;
            int rowsAffected = st.executeUpdate(q);
            
            if (rowsAffected > 0) {
                System.out.println("Record deleted successfully");
            } else {
                System.out.println("No record found with the given id");
            }
            
            scanner.close();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}