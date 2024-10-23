public class Test {
    public static void main(String[] args) {
        Employee emp = new Employee(1, "Emplo", 20000);
        Teacher teach = new Teacher(2, "Teach", 20000, 3);
        System.out.println(emp.getDetails());
        System.out.println(teach.getDetails());
    }
}
