/*
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

public class Insert {
    public static void main(String[] args) {
        String name = "root";
        String pwd = "";
        String url = "jdbc:mysql://localhost:3306/javalab"; 
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            Connection cn = DriverManager.getConnection(url, name, pwd);
            Statement st = cn.createStatement();
            String q = "INSERT INTO students VALUES (1, 'test user', 'BESE', 100)";
            st.executeUpdate(q);
            System.out.println("Record inserted successfully");
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }
}