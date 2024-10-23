public class Main {
    public static void main(String[] args) {
        Address add = new Address("Bagmati", "Balkumari", 13);
        Student stu = new Student("Anish", 8, add);
        System.out.println(stu);
    }
}
